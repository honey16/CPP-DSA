#include <iostream>
using namespace std;
/*
pattern 1
1234
1234
1234
1234
*/


int main() {
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << j;
      j = j + 1;
    }
    cout << endl;
    i = i + 1;
  }
}
