#include<iostream>
using namespace std;

int reverse(int num) {
    int remiander;
    int reverse;
    while (num!=0)
    {
        remiander = num % 10;
        reverse = reverse*10 + remiander;
        num = num /10;
    }
    return reverse;
}

bool isPalindrome(int data) {
    if(reverse(data)==data) {
        return true;
    }
    return false;
}

int main() {
    int numb;
    cout<<"Enter number to check palindrome?:";
    cin>>numb;
    if(isPalindrome(numb)) {
        cout<<"Number is palindrome!!";
    } else {
        cout<<"Number is not palindrome!!";
    }
}