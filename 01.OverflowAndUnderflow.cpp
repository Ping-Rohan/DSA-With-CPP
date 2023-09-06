#include<iostream>
using namespace std;
int main() {
    // signed int can store from 2^31 to 2^31-1 (-2,147,483,648 to 2,147,483,647)
    int accepted = 2147483647;
    int overflow = 2147483649;

    // you get intended result for accepted
    cout << accepted;
    // you get unexpected result for overflow
    cout << overflow;

    // unsigned int can store from 0 to 2^32-1 (0 to 4,294,967,295)
    unsigned int unsignedAccepted = 4294967295;
    unsigned int unsignedOverflow = 4294967297;

    // you get intended result for accepted
    cout << unsignedAccepted;
    // you get unexpected result for overflow
    cout << unsignedOverflow;

    // unsigned can utilize its all bit where as signed has to use one bit for sign

    return 0;
}