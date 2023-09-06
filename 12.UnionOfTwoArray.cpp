#include<iostream>
#include<vector>
using namespace std;

int main() {
     int firstArr[] = {1,2,4,6,8,9};
    int secondArr[] = {2,3,5,7,8,10};
    int i,j;
    vector<int> ans;

    for( i=0;i<6;i++) {
        for( j=0;j<6;j++) {
            if(firstArr[i] == secondArr[j]) {
                secondArr[j] = INT_MIN;
                break;
            }
        }
    }

    for( i=0;i<6;i++) {
        if(firstArr[i] != INT_MIN) {
        ans.push_back(firstArr[i]);
        }
    }

   for( j=0;j<6;j++) {
        if(secondArr[j] != INT_MIN) {
            ans.push_back(secondArr[j]);
        }
    }

    for(i=0;i<ans.size() ; i++) {
        cout << ans[i] << " ";
    }


    return 0;
}