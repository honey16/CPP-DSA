/*
https://leetcode.com/problems/string-compression/

i/p  {a,a,,b,b,b,c,c,c}
o/p  {a,2,b,3,c,3}
exception if count 1 no need to show number

put the ans in same vector no new vector
*/

int compress(vector<char>& chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while (i<n){
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        //exit loop when
        //vector fully traversed or new/different char encountered

        //store old character
        chars[ansIndex++] = chars[i];
        int count = j-i;

        if (count > 1) {
            string cnt = to_string(count);
            //to convert number into character
            for (char ch: cnt){
                chars[ansIndex++] = ch;
            }
        }
        i=j;
    }
    return ansIndex;
}