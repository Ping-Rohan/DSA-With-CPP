#include<iostream>
using namespace std;

/*
         *
        * *
       *   *
      *     *
     *       *
    ***********   
*/

int main() {
    int row, col;
    int n =10;
    
    for(row=1;row<=n;row++) {
        int k = 0;
        for(col = 1; col<=(2*n)-1 ; col++) {
            if(col<=n-row) {
                cout << " ";
            } else if(k<(2*row)-1) {
                if(k==0 || k==(2*row)-2 || row == n){
                    cout << "*";
                    k++;
                } else {
                    cout << " ";
                    k++;
                }
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}