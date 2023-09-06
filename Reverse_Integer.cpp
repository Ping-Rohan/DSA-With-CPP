#include<iostream>
#include<cmath>
using namespace std;

int reverseInteger(int number) {
    int temp = abs(number) , reverse = 0 , signBit = number > 0 ? 1 : -1;

    while(temp > 0) {
        int digit = temp % 10;
        reverse = reverse * 10 + digit;
        temp = temp / 10;
    }

    return reverse * signBit;
}

int main() {
    int userInput = -322;
    cout << reverseInteger(userInput);
    cout << INT_MIN << endl;
    cout << INT_MAX;
}