#include<iostream>
using namespace std;

// typecasting refers to changing an entity of one datatype into another
// typecasting is of two types:
// 1. Implicit typecasting
// 2. Explicit typecasting

// Implicit typecasting
// In this type of typecasting, the compiler automatically converts one datatype into another

// Explicit typecasting
// In this type of typecasting, the user converts one datatype into another by using the casting operator


int main() {
    double numberWithDecimal = 3.14;
    int numberWithoutDecimal = numberWithDecimal; // Implicit typecasting
    cout << numberWithoutDecimal << endl;

    int number = 3;
    double decimalNumber = (double)number; // Explicit typecasting
    cout << decimalNumber << endl;
    return 0;
}