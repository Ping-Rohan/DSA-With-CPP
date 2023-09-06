#include<iostream>
using namespace std;

void primeUpToNth(int n) {
    for(int number=1;number<=n;number++) {
        bool isPrime = true;
        for(int divisor = 2 ; divisor <=number-1 ; divisor++) {
            if(number % divisor == 0) {
                isPrime = false;
            }
        }
        if(isPrime) {
            cout << number << " ";
        }
    }
}

int main() {
    primeUpToNth(30);
    return 0;
}