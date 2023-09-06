#include<iostream>
using namespace std;

/*
    *****
    *   *
    *****
*/

int main() {
    int row , col;
    for(row=1 ; row<=3;row++){
        for(col = 1 ; col<=5;col++) {
            if(row==1 || row == 3 || col == 1 || col == 5) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }
    return 0;
}