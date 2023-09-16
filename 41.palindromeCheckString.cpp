#include<iostream>
#include<string.h>

using namespace std;

int main() {
    char string[] = "racecar";
    int j = strlen(string) -1;
    int i=0;
    bool isPalindrome = true;

    while(i<=j) {
        if(string[i] != string[j]) {
            isPalindrome = false;
            break;
        }
        i++ , j--;
    } 

    if(isPalindrome) {
        cout << "Palindrome";
    } else {
        cout << "Not palindrome";
    }

    return 0;
}