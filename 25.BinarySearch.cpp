#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int size , int target) {
    int start = 0;
    int end = size - 1;

    while(start<=end) {
        int mid = (start + end) /2;
        if(arr[mid] == target) {
            return mid;
        } else if(arr[mid] > target) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1,4,5,7,8,9,68,65};
    int target = 40;
    int size = sizeof(arr) / sizeof(int);
    int result = BinarySearch(arr , size , target);
    cout << "Result is " << result ;
    return 0;
}