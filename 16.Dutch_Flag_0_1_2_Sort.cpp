#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>nums{2,0,2,1,1,0};
    int start = 0 , i = 0 , end = nums.size()-1;

    while(i<=end && start<=end) {
            if(nums[i] == 2) {
                swap(nums[i] , nums[end]);
                end--;
            } else if(nums[i] == 1) {
                i++;
            } else {
                swap(nums[i] , nums[start]);
                start++;
                i++;
            }
    }

    for(auto value:nums) {
        cout << value << " ";
    }

    return 0;
}