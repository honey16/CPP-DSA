/*
https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5


https://cplusplus.com/reference/string/string/

*/

/*
	Time complexity: O((length(S))
	Space Complexity: O((length(S))
	
	Where S is the given string. 
*/

void toLowerCase(string &s)
{	
    // Traverse through the string s
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        
        // Check if ch is a uppercase letter
        if (ch <= 'Z' && ch >= 'A')
        {
            ch = ch - ('A' - 'a');
            s[i] = ch;
        }
    }
}

// This function reverse the string s
string reverseString(string s)
{
    for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
    {
        // Swap the ith and jth characters.
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    
    return s;
}

bool checkPalindrome(string s)
{	
    // Convert uppercase letter into lowercase letter
    toLowerCase(s);
    
    // Find the reverse string of s
    string reversedS = reverseString(s);

    int n = s.length();
    int i = 0;
    int j = 0;

    while (i < n && j < n)
    {
        if (isalnum(s[i]) == 0)
        {
            // ith pointer points to invalid character.
            ++i;
        }
        else if (isalnum(reversedS[j]) == 0)
        {
            // jth pointer points to invalid character.
            ++j;
        }
        else if (s[i] == reversedS[j])
        {
            ++i; 
            ++j;
        }
        else
        {
            return false;
        }
    }
    
    return true;
}



// Note 
/*
To convert char number to int number
ch = '1'
ch - '0' = 1

*/


//Better Approch using two pointer and no isalnum


bool valid(char ch) {
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
        return 1;
    }
    return 0;
}
    

char toLowerCase(char ch) {
if( (ch >='a' && ch <='z') || (ch >='0' && ch <='9') )
    return ch;
else{
    char temp = ch - 'A' + 'a';
    return temp;
    }
}


bool checkPalindrome(string a) {
int s = 0;
int e = a.length()-1;

while(s==e) {
    if(a[s] != a[e])
    {
        return 0;       
    }
    else{
        s++;
        e--;
    }
}
    return 1;
}



bool isPalindrome(string s) {
        
    //faltu character hatado
    string temp = "";
        
    for(int j=0; j<s.length(); j++) {   
        if(valid(s[j])) {
            temp.push_back(s[j]);
        }
    }
        
    //lowercase me kardo
    for(int j=0; j<temp.length(); j++) { 
        temp[j] = toLowerCase(temp[j]);
    }
        
    //check palindrome
    return checkPalindrome(temp);
        
}
