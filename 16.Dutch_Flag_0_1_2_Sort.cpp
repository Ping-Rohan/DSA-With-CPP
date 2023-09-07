#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,2,2,2,2,2,2,2,2,2,2,0};
    int size = sizeof(arr) / sizeof(int);
    int start = 0 , i = 0 , end = size-1;

    while(i<=end && start<=end) {
            if(arr[i] == 2) {
                swap(arr[i] , arr[end]);
                end--;
            } else if(arr[i] == 1) {
                i++;
            } else {
                swap(arr[i] , arr[start]);
                start++;
                i++;
            }
    }

    for(auto value:arr) {
        cout << value << " ";
    }

    return 0;
}