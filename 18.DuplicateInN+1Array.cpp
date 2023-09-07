#include<iostream>
#include<vector>
using namespace std;

int duplicate(vector<int> &nums) {
    int ans = -1;
         for(int i=0;i<nums.size();i++){
            int indexValue = abs(nums[i] - 1);
            if(nums[indexValue] < 0) {
                ans =  indexValue;
                break;
            } else {
                nums[indexValue] = nums[indexValue] * -1;
            }
        }
        return ans;
}

int main() {
    vector<int> nums{3,1,3,4,2};


     cout << duplicate(nums);

    return 0;
}