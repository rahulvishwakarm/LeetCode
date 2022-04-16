#include<iostream>
using namespace std;

int armStrongNumber(int num) {
    int sum = 0;
    int remainder;
    if(num!=0) {
        remainder = num % 10;
        sum = sum + remainder*remainder*remainder;
        num = num / 10;
    }
    return sum;
}

int main() {
    int armst;
    cout<<"Enter numberto check armsStrong: ";
    cin>>armst;
    int num;
    cout<<armStrongNumber(armst);
}