#include<iostream>
#include<cmath>
using namespace std;

int BinaryToDecimal(int number) {
    int temp = number;
    int powerCount = 0;
    int decimal = 0;

    while(temp>0) {
        int digit = temp % 10;
        decimal = decimal + digit *  pow(2 , powerCount);
        temp = temp / 10;
        powerCount++;
    }
    return decimal;
}

int main() {
    int userInput = 11;
    int resultedDecimal = BinaryToDecimal(userInput);
    cout << resultedDecimal;
    return 0;
}