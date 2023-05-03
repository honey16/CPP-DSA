//datatype that can store similar type of item
//items stored at contiguous location ( accesed by index)
#include <iostream>
using namespace std;

void printArray(int Arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << Arr[i] << endl;
  }
}

int main() {

  int fifth[10] = {1};
  int fifthSize = sizeof(fifth) / sizeof(int);
  printArray(fifth, fifthSize);
  // as index let say start of 100 then 104 108 112 so int = 100
}
