#include<iostream>
using namespace std;

/*
    **********
    *********
    ********
    *******
    ******
    *****
    ****
    ***
    **
    *
*/

int main() {
    int row , col;
    for(row = 1 ; row<=10;row++) {
        for(col = 1 ; col <= (10-row) + 1 ; col++) {
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}