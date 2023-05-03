
 /*
 Important
1
21
321
4321

row = n
column i

relation i-j+1
+1 as j starts from 1 
+0 if j starts from 0
*/

#include <iostream>
using namespace std;

int main(){
  
  int i=1;
  int n;
  cin >> n;
  
  while (i<=n){
    int j =1;
    while (j<=i){
      cout << i-j+1;
      j=j+1;
    }
    cout << endl;
    i=i+1;
  }
}

