/*
char a = 'z';
char only stores one character

Strings in C++ : 1 Dimensional Character Array
like int arr[10]
char ch[10];
To take input
char name[20];
cin >> name;  //eg babbar
B a b b a r - . ...  .
0 1 2 3 4 5 6 7      19
- : null character '\0'
thus a string has n+1 things : n char and 1 null char
Ascii value 0
To tell where the string ends at first instance of null character

Note: cin stops execution after space("")/tab(\n)/newline/enter(\n)
Thus to get full line we use
    cin.getline(<string>,<length>)


output
cout << name;

Note : no need to pass character size in function header


Splitting Strings
Delimiters (" ", "," "-", etc)
https://www.javatpoint.com/how-to-split-strings-in-cpp


String
https://cplusplus.com/reference/string/string/

String functions
also their functioning


Find differences between char array and string
https://techdifferences.com/difference-between-character-array-and-string.html


Some inbuilt functions

length
int len = strlen(name);

compare (s1,s2)
strcmp(s1,s2)   !=0 not equal
                = 0 equal
 copy
strcpy (destination,source)


*/

