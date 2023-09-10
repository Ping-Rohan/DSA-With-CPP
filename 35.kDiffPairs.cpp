#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

 int binarySearch(vector<int>nums , int start , int target) {
        int end = nums.size() - 1;

        while(start<=end) {
            int mid = start + (end - start) / 2;
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] < target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
       sort(nums.begin() , nums.end());
       set<pair<int , int>> pairs ;

    for(int i=0 ; i<nums.size() ; i++) {
        if(binarySearch(nums , i+1,nums[i]+k) != -1) {
            pairs.insert({nums[i] , nums[i] + k});
        }
    }

    return pairs.size();
    }

int main() {
    vector<int> nums = {4,1,6};
    int result = findPairs(nums , 3);
    cout << result;
    return 0;
}