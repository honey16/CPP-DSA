/*
Lower Right Triangle
important
---1
--121
-12321
1234321

Divide into 3 triangles  spaces left and right triangle
and each triangle ko squeeze left ( if possible) as that is how loop print would work
here
---       1            
--        12           1
-   and   123   and    21
          1234         321

for 3rd triangle starting from i-1 then decrement
*/


#include <iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin >> n;

    while(i<=n){

        //print spaces
        int space= n-i;
        while(space){
            cout << " ";
            space = space -1;
        }
        
        //print First triangle
        int j=1;
        while(j<=i){
            cout << j;
            j=j+1;
        }

        //3rd triangle
        int start = i-1;
        while(start){
            cout << start;
            start =start-1;
        
        }
        
        i=i+1;
        cout << endl;
    }
}
