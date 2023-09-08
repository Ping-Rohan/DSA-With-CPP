#include<iostream>
#include<vector>

using namespace std;
int main() {
    int arr[4][4] {
        {1,2,3,4} ,
        {5,6,7,8} ,
        {9,10,11,12} ,
        {13,14,15,16}
    };
    int startingRow = 0 , endingColumn = 3, endingRow = 3, startingColumn = 0 , total = 16 , i;

    int count = 0;
    while(count<total) {
        // first row
        for(i=startingColumn;i<=endingColumn && count<total ; i++) {
            cout << arr[startingRow][i] << " ";
            count ++;
        }

        startingRow++;

        // last column
        for(i=startingRow ; i<=endingColumn && count<total ; i++) {
            cout << arr[i][endingColumn] << " ";
            count ++;
        }

        endingColumn--;

        // last row
        for(i=endingColumn ; i>=startingColumn && count<total;i--) {
            cout << arr[endingRow][i] << " ";
            count ++;
        }

        endingRow--;

        // first column
        for(i=endingRow;i>=startingRow && count<total;i--) {
            cout << arr[i][startingColumn] << " ";
            count ++;
        }
        startingColumn++;
    }
    return 0;
}