#include<iostream>
using namespace std;

int main() {
    int userInput = 53;
    int temp = userInput;

    while(temp > 0) {
        int remainder = temp % 2;
        cout << remainder;
        temp = temp / 2;
    }

    return 0;
}