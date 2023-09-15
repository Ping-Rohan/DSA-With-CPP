#include<iostream>
#include<vector>
#include<algorithm>

// n=number of stalls and k = number of cows

using namespace std;

bool isPossibleSolution(int cows , vector<int>nums,int solution) {
    int cowCount = 1;
    int position = nums[0];

    for(int i=1;i<nums.size();i++) {
        cout << position << endl;
        int diff = nums[i] - position;
        if(diff >= solution) {
            cowCount ++;
            if(cowCount == cows) return true;
            position = nums[i];
        }
    }
return false;
}

int solve(int n , int k , vector<int>&nums) {
    sort(nums.begin() , nums.end());
    int start = 0;
    int end = nums[n-1];
    int ans = -1;

    while(start <=end ) {
        int mid = start + (end - start) / 2;
        if(isPossibleSolution( k , nums ,mid)) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int>nums{10,1,2,7,5};
    int n = 5 , k =3 ;
    int ans = solve(n,k,nums);
    cout << ans;
    return 0;
}