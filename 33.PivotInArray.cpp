#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr) {
    int start = 0;
    int end = arr.size() - 1;

    while(start<=end) {
       int mid = start + (end - start) / 2;
       if(start == end) return  arr[end];
       if(mid <= end && arr[mid] > arr[mid+1]) return arr[mid];
       if(mid-1>=start && arr[mid-1] > arr[mid]) return arr[mid-1];

       if(arr[start] > arr[mid]) {
        end = mid - 1;
       } else {
        start = mid + 1;

       }
    } 
    return -1;
}

int main() {
    vector<int> arr {10,20,30,1,2,3};
    int pivot = findPivot(arr);
    cout << pivot;
    return 0;
}