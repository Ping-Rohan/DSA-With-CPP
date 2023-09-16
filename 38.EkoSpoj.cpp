#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossibleSolution(vector<int> trees, int woods, int solution) {
    int woodSum = 0;
    for (int i = 0; i < trees.size(); i++) {
        if (trees[i] > solution) {
            woodSum = woodSum + trees[i] - solution;
        }
    }
    return woodSum >= woods;
}

int calculateOptimalHeightOfSaw(vector<int> trees, int woods) {
    int start = 0;
    int end = *max_element(trees.begin(), trees.end());
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(trees, woods, mid)) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    vector<int> trees{20, 15, 10, 17};
    int requiredWoodsInMeter = 7;
    int result = calculateOptimalHeightOfSaw(trees, requiredWoodsInMeter);
    cout << result;
    return 0;
}
