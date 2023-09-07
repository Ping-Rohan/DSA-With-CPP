#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,34,-1,1,2,5,-1,2,-4,3,-100};
    int size = sizeof(arr) / sizeof(int);
    int start = 0 , end = size-1;

    while(start<=end) {
        if(arr[start] > 0) {
            swap(arr[start] , arr[end]);
            end--;
        } else {
            start ++;
        }
    }

    for(auto value:arr) {
        cout << value << " ";
    }
    return 0;
}