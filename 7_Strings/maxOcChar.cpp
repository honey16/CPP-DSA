/*
https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1
*/
#include <iostream>
using namespace std;

char getMaxOccCharacter(string s){
    //26 alphabets
    int arr[26] = {0};

    //create an array of count of characters
    for (int i =0; i<s.length(); i++){
        char ch = s[i];
        //lowercase
        int number = 0;
        if (ch >= 'a' && ch <= 'z'){
            //to get its number
            number = ch - 'a';
        }
        else{
            //upercase
            number = ch - 'A';
        }
        arr[number]++;    //important we can increase number of each element in array
    }

    int maxi = -1;
    int ans = 0;
    for (int i = 0; i<26; i++) {
        if (maxi < arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a'+ ans;
    return finalAns;

}

int main(){

    string s;
    cin >> s;

    cout << getMaxOccCharacter(s);
}