/*
Convert given amount into number of notes of 100 50 20 1

eg 1330  13 100 0 50 1 20 10 1
greedy strat
*/


#include <iostream>
using namespace std;

int main(){

    int amt;
    cout << "Enter Amount" <<endl;
    cin >> amt;

    int hun, twn, one;


    switch (amt){

        case 1 : hun=amt/100;
                    amt = amt - (hun*100);
                    cout << "No of Rs 100 Notes" << hun << endl;

        case 2 : twn = amt/20;
                    amt = amt - (twn*20);
                    cout << "No of Rs 20 Notes" << twn << endl;

        case 3 : one = amt/1;
                    
                    cout << "No of Rs 1 Notes" << one << endl;


    }
    return 0;
}
