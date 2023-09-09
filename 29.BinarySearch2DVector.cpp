#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start = 0;
        int end = matrix.size() * matrix[0].size() -1;

        while(start<=end) {
            int mid = start + (end-start) /2;
            int rowIndex = mid / matrix[0].size();
            int colIndex = mid % matrix[0].size();

            if(matrix[rowIndex][colIndex] == target) {
                return true;
            } else if(matrix[rowIndex][colIndex] < target) {
                start = mid + 1; 
            } else {
                end = mid - 1;
            }
        }
        return false;
    }

int main() {
     vector<vector<int>> array{ { 1,2,3,4 }, { 5,6,7,8 }, { 9,10,11,12 } };
     bool result = searchMatrix(array , 10);
     cout << result;
    return 0;
}