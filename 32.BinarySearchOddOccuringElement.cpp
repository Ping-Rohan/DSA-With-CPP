#include<iostream>
#include<vector>

using namespace std;

int findOddOccuring(vector<int>arr) {
    int start = 0;
    int end = arr.size() - 1;

    while(start<=end) {
        int mid = start + (end - start ) / 2;
       if(start == end) {
        return arr[start];
       } 

       if(mid%2==0) {
        if(arr[mid] == arr[mid+1]) {
            start = mid + 2;
        } else {
            start = mid;
        }
       } else {
            if(arr[mid] == arr[mid-1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
       }
    }
    return -1;
}

int main() {
    vector<int> arr{2,2,3,4,4,2,2};
    int result = findOddOccuring(arr);
    cout << result;
    return 0;
}