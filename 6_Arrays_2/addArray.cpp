/*
https://www.codingninjas.com/codestudio/problems/sum-of-two-arrays_893186?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_4

carry = sum/10 
and digit sum%10
*/
vector<int> reverse(vector<int> v) {
    
    int s = 0;
    int e = v.size()-1;
    
    while(s<e)
    {
        swap(v[s++], v[e--]);
    }
    return v;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	
    int i = n-1;
    int j = m-1;
    vector<int> ans;
    int carry = 0;
    /*
    Note : push_back() will put element in reverse order
    Thus we have to reverse final vector
    */
    while(i>=0 && j>=0) {
        int val1 = a[i];
        int val2 = b[j];
            
        int sum = val1 + val2 + carry;   
        
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // first case  a greater
    while(i>=0) {
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
     // second case  b greater
    while(j>=0) {
        int sum = b[j] + carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    
     // third case  carry greater
    while(carry != 0) {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    
    //print(ans);
    return reverse(ans);
}



//check why wrong ans
vector<int> reverse(vector<int>& ans){
    int s=0;
    int e=ans.size()-1;
    while (s<e){
        swap(ans[s],ans[e]);
        s++;
        e--;
    }
	return ans;
}



vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m){

    int i = n-1;
    int j = m-1;
    int carry =0;

    vector<int> ans;
    /*
    Note : push_back() will put element in reverse order
    Thus we have to reverse final vector
    */
    while(i>=0 && j>=0){
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;

    }

    //first case a greater
    while (i>=0){
        int sum = a[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    //second case b grater
    while (j >= 0) {
      	int sum = b[i] + carry;
      	carry = sum / 10;
      	int value = sum % 10;
      	ans.push_back(value);
      	j--;
    }
    //third case  carry left out
    while(carry!=0){
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
    }
    return reverse(ans);

}