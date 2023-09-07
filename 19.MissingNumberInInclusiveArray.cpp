#include<iostream>
#include<vector>
using namespace std;

/*
    input [0,2,3] since the length is 3 (0,3) since length is 3 and missing is 1
*/

int findMissing(vector<int> &nums) {
      int n = nums.size();
        int actualSumOfArray = (n*(n+1)) /2;
        int numsSum = 0;

        for(int i=0;i<n;i++) {
            numsSum +=nums[i];
        }

        return actualSumOfArray - numsSum;
}

int main() {
    vector<int>nums{0,2,3};
    cout << "Missing number is : " << findMissing(nums);
    return 0;
}