#include<iostream>
using namespace std;

int findSquareRoot(int number) {
    int start = 1 , end = number , answer ;

    while(start <=end) {
        int mid = (start + end) /2;
        if(mid * mid <= number) {
            answer = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return answer;
}

int main() {
    int number = 17;
    double result = findSquareRoot(number);
    
    int precision = 9;
    double step = 0.1;
    for(int i=0;i<precision;i++) {
        for(double j=result ; j * j <= number ; j=j+step ) {
           result = j; 
        }
        step /= 10;
    }
    cout << result;
    return 0;
}