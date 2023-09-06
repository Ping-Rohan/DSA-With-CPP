#include<iostream>
#include<vector>
using namespace std;

// [1,1,2,3,4,3,2,4,9] => 9

int main() {
    int n;
    cout << "Enter value of n";
    cin >> n;

    vector<int> arr(n);
    for(int i=0;i<arr.size();i++) {
        cin >> arr[i];
    }

    int uniqueElement=0;

    for(int j=0;j<arr.size();j++) {
        uniqueElement = uniqueElement ^ arr[j];
    }

    cout << "Unique element is " << uniqueElement;

    return 0;
}