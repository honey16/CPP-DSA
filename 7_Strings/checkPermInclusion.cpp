/*
https://leetcode.com/problems/permutation-in-string/

eg s2 = eidbaooo
s1 = ab   permutation = ab, ba
True

Solution
s1 - character count store by int arr[26]
s2 - traverse on a window equal to s1.length()
also on each window increment count of window character and also decrement count of previous character while changing window 
so that we can compare count of window and s2\

Important question for online interview
*/
//checking both count array
bool checkEqual(int a[26], int b[26]){
    for (int i=0; i<26; i++){
        if (a[i] != b[i]){
            return 0;
        }
    }
    return 1;
}


bool checkInclusion(string s1, string s2){
    int count1[26]= {0};
    
    //O(len(s1))
    for (int i=0; i<s1.length(); i++){
        int index = s1[i] - 'a';
        count1[index]++;
    }

    //traverse s2 in window of size s1 length and compare

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    //running for first window
    //also check not to be out of bound of string
    //O(lem(s1))
    while (i<windowSize && i<s2.length()) {
        int index = s2[i]-'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(count1, count2)){
        return 1;
    }

    //age window process karo
    //O(len(s2))
    while (i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;

        char oldChar = s2[i-windowSize];
        index = oldChar - 'a';
        count2[index]--;
        i++;

        if (checkEqual(count1, count2)){
        return 1;
    }
        
    }
    return 0;
}

//time comp : O(len(s2))
//space comp : O(1) as 26 ki array