//function tofind total set bits in a,b

#include <iostream>
using namespace std;

int setBits(int b){
    int count=0;
    while (b!=0){
        if (b&1){
            count++;
        }
        b=b>>1;
    }
    return count;
}

int main(){

    int a,b;
    cout <<"Enter a,b";
    cin >> a >> b;

    int A1= setBits(a);
    int B1= setBits(b);
    int ans = A1 + B1;
    cout << "Total set bits are" << ans << endl;

}

//funtion createsa copy of data which is in main   pass by value