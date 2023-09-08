#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> addNumbers(vector<int> a , vector<int> b) {
    int sizeOfA = a.size() -1;
    int sizeOfB = b.size() - 1;
    int  carry = 0 , i=sizeOfA , j = sizeOfB;
    vector<int> result ;

    while(i>=0 && j>=0) {
        int sum = carry + a[i] + b[j];
        carry = sum / 10;
        result.push_back(sum%10);
        i-- , j--;
    }

    while(i>=0) {
        int sum = carry + a[i] + 0;
        int carry = sum / 10;
        result.push_back(sum%10);
        i--;
    }

     while(j>=0) {
        int sum = carry + a[j] + 0;
        int carry = sum / 10;
        result.push_back(sum%10);
        j--;
    }

    if(carry ) {
        result.push_back(carry);
    }
  

    return result;
}

int main() {
    vector<int> a {9,9,9,9};
    vector<int> b{9,9,9};
    vector<int> result = addNumbers(a,b);
    reverse(result.begin() , result.end());
    
    for(auto value:result) {
        cout << value << " ";
    }

    return 0;
