#include<iostream>
using namespace std;

class Fibonacci {
public:
    int fib(int n) {
        if(n==0 or n==1) {
            return n;
        }
        return fib(n-1) + fib(n-2);
    }
};

int main() {
    Fibonacci FB;
    cout<<FB.fib(3);
}