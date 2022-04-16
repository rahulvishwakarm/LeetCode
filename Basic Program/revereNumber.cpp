#include<iostream>
#include<cmath>
using namespace std;

int reverseInteger(int data) {
    int remainder;
    int reverse = 0;
    while (data!=0)
    {
        remainder = data % 10;
        reverse = reverse*10 + remainder;
        data = data / 10;
    }
    return reverse;
}

int main() {
    int dest;
    cout<<"Enter Integer to reverse ? : ";
    cin >> dest;
    cout<<reverseInteger(dest);
}