#include<iostream>
using namespace std;

int findFirstOccurance(int arr[] , int size , int target) {
    int start = 0;
    int end = size - 1;
    int index = -1;


    while(start<=end) {
        int mid = (start + end) /2;
        if(arr[mid] == target) {
            index = mid;
            end = mid - 1;
        } else if(arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return index;
}

int main() {
    int arr[] = {1,2,5,6,7,9,7,6,5};
    int target = 6;
    int size = sizeof(arr) / sizeof(int);
    int result = findFirstOccurance(arr , size , target);
    cout << result;
    return 0;
}