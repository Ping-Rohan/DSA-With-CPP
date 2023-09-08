#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int>arr) {
    int start = 0;
    int end = arr.size() - 1 , mid;

        while(start <= end) {
             mid = start + (end - start) /2;
             cout << mid;
            if(arr[mid] > arr[mid+1]) {
                start = mid;
            } else {
                end = mid-1;
            }
        }
        return mid;
}

int main() {
    vector<int> arr = {5,6,7,10,6,4,3};
    cout << findPeak(arr);
}