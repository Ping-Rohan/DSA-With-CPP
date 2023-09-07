#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,4,5,6,8,5};
    int target = 10;

    for(int i=0;i<8;i++) {
        for(int j=i+1;j<8;j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Found target " << arr[i] << " and " << arr[j] << endl;
            }
        }
    }
    return 0;
}