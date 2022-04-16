#include<iostream>
#include<cmath>
using namespace std;

void primeNumber(int data) {    
    for(int i=2;i<sqrt(data);i++) {
        if(data%i==0) {
            cout<<i<<" is prime!!"<<endl;
        }
        else {
            cout<<i<<" is not prime!!"<<endl;
        }
    }
}

int main() {
    int dest;
    cout<<"Till Where do you need prime number ? : ";
    cin >> dest;
    primeNumber(dest);
}