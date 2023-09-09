#include<iostream>
#include<vector>

using namespace std;

int searchInNearlySorted(vector<int>arr , int target) {
    int start = 0;
    int end = arr.size() - 1;

    while(start<=end) {
        int mid = start + (end - start) /2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid+1] == target) {
            return mid+1;
        } else if(arr[mid-1] == target) {
            return mid - 1;
        } else if(arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> arr{1,2,3,5,4,6,7};
    int result = searchInNearlySorted(arr,4);
    cout << result;
    return 0;
}