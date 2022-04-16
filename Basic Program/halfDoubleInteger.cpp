#include<iostream>
using namespace std;

void dblehalfInteger(int data) {
    int dbledta = data<<1; // data*2
    int halfdta = data>>1; // data/2
    cout<<dbledta<<endl;
    cout<<halfdta<<endl;
}

int main() {
    dblehalfInteger(12);
}