#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

bool isPossibleSolution(int arr[] , int books , int students , int solution) {
    int pageSum = 0;
    int studentCount =1;
    for(int i=0;i<books ; i++) {
        if(arr[i] > solution) return false;
        if(arr[i] + pageSum <= solution) {
            pageSum += arr[i];
        } else {
            studentCount++;
            pageSum = arr[i];
            if(studentCount > students) return false;
        }
    }
    return true;
}

int AllocateBooks(int arr[] , int books , int students) {
    int start = 0;
    int end = accumulate(arr,arr+books,0);
    int ans=-1;

    while(start<=end) {
        int mid = start + (end - start) / 2;
        if(isPossibleSolution(arr,books,students,mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {12,34,67,90};
    int result = AllocateBooks(arr , 4 , 2);
    cout << result;
}