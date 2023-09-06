#include<iostream>
#include<vector>
using namespace std;
int main() {
    int firstArr[] = {2,3,4,6,4,3};
    int secondArr[] = {3,4,6,8,9};
    vector<int> intersection;

    for(int i=0;i<6;i++) {
        for(int j=0;j<5;j++) {
            if(firstArr[i] == secondArr[j]) {
                intersection.push_back(firstArr[i]);
                secondArr[j] = INT_MIN;
            }
        }
    }

    for(int k = 0 ; k<intersection.size();k++) {
        cout << intersection[k] << " ";
    }
    return 0;
}