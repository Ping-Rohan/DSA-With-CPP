#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> nums{1,2,3,4,4,5,6,5,7};
    unordered_map<int , int> hashTable;

    for(int i=0;i<nums.size() ; i++) {
        if(hashTable[nums[i]] ) {
            hashTable[nums[i]] = hashTable[nums[i]] + 1;
        } else {
            hashTable[nums[i]] = 1;
        }
    }

    for(int i=0;i<nums.size() ;i++) {
        if(hashTable[nums[i]] > 1) {
            cout << nums[i];
            break;
        }
    }

    return 0;
}