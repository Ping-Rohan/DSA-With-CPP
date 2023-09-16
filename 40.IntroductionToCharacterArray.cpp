// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int getLength(char name[]) {
    int count = 0;
    int i = 0;
    
    while(name[i] != '\0') {
        count ++;
        i++;
    }
    return count;
}

void replaceSpaceWithSymbol(char name[]) {
    int i = 0 , j=getLength(name) - 1;
    
    while(i<=j) {
        if(name[i] == 32) name[i] = '@';
        if(name[j] == 32) name[j] = '@';
        i++ , j--;
    }
}


void reverseString(char name[]) {
    int i=0;
    int j=getLength(name) - 1;
    
    while(i<=j) {
        swap(name[i] , name[j]);
        i++,j--;
    }
}

int main() {
    char name[100];
    cin.getline(name,100);
    reverseString(name);
    cout << "String after reversing : " << name;  
    return 0;
}