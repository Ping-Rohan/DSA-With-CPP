#include<iostream>
#include<vector>

using namespace std;

 int findPivot(vector<int>nums) {
        int start = 0;
        int end = nums.size() - 1;

        while(start<=end) {
            int mid = start + (end  - start) / 2;
            if(start == end) return start;
            if( mid <=end && nums[mid] > nums[mid+1]) return mid;
            if(mid - 1 >= start && nums[mid] < nums[mid-1]) return mid -1;
            if(nums[mid] < nums[start]) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1;
    }

    int binarySearch(vector<int>nums , int start , int end , int target) {
        while(start<=end) {
        int mid = (start + end) /2;
        if(nums[mid] == target) {
            return mid;
        } else if(nums[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
    }

    int search(vector<int>& nums, int target) {
        int pivotIndex = findPivot(nums);
        if(target >= nums[0] && target <= nums[pivotIndex]) {
            return binarySearch(nums , 0,pivotIndex , target);
        } else {
            return binarySearch(nums , pivotIndex+1, nums.size() - 1 , target);
        }
    }
int main() {
    vector<int> arr{3,1};
    int result = search(arr , 1);
    cout << result;
    return 0;
}