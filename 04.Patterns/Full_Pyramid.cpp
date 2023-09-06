#include<iostream>
using namespace std;

/*
         *
        ***
       *****
      *******
     *********
    ***********   
*/

int main() {
    int row, col;
    int n ;
    cout << "Enter Value of N" << endl;
    cin >> n;
    
    for(row=1;row<=n;row++) {
        int k = 0;
        for(col = 1; col<=(2*n)-1 ; col++) {
            if(col<=n-row) {
                cout << " ";
            } else if(k<(2*row)-1) {
                cout << "*";
                k++;
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}