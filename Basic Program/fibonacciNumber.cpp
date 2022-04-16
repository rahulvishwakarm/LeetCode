#include<iostream>
#include<cmath>
using namespace std;

int fibonacciNumberRecurssion(int data) {
    if(data<2) {
        return data;
    }
    return fibonacciNumberRecurssion(data-1) + fibonacciNumberRecurssion(data-2);
}

int fibonacciNumberWithoutRecurssion(int data) {
    int fibo[data+2];
    int f1 = 0;
    int f2 = 1;
    for(int i=2;i<=data;i++) {
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    return fibo[data];
}

int main() {
    int dest;
    cout<<"Which Fiobonacci number do you want? : ";
    cin >> dest;
    cout<<fibonacciNumberRecurssion(dest);
    // cout<<fibonacciNumberWithoutRecurssion(dest);
}