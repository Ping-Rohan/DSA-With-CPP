#include<iostream>
using namespace std;

bool isPrime(int number) {
    for(int divisor=2;divisor<=number-1;divisor++) {
        if(number%divisor == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    int userInput = 17;
    
    if(isPrime(userInput)) cout << "Number is prime";
    else cout << "The number is not prime";
    return 0;
}