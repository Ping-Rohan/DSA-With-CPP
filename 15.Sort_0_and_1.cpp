#include<iostream>
using namespace std;

// three pointer approach
int main() {
    int arr[] = {1,0,1,0,1,1,0,0,1,0,1};
    int size = sizeof(arr) / sizeof(int);
    int start = 0 , end = size-1 , i=0;

    while(start<=end) {
        if(arr[i] == 1) {
            swap(arr[i] , arr[end]);
            end--;
        } else {
            i++;
            start++;
        }
    }

   for(auto value:arr) {
        cout <<value << " ";
   }

}