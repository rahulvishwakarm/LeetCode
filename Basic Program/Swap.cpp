#include<iostream>
using namespace std;

class SwapOfNum {
    public:
        // Swaping with third variable
        void swapWithThirdVariable(int *num1,int *num2) {
            int temp;
            temp = *num1;
            *num1 = *num2;
            *num2 = temp;
        }

        // Swaping without third variable
        void swapWithOutThirdVariable(int *n1,int *n2) {    
            *n1 = *n1 + *n2;
            *n2 = *n1 - *n2;
            *n1 = *n1 - *n2;
        }
};

int main() {
    SwapOfNum smd;
    int a = 10;
    int b = 20;
    cout<<"With Third Variable"<<endl;
    cout<<"Before Swap: "<<a<<" "<<b<<endl;
    smd.swapWithThirdVariable(&a,&b); 
    cout<<"After Swap: "<<a<<" "<<b<<endl;

    int c = 30;
    int d = 40;
    cout<<"Without Third Variable"<<endl;
    cout<<"Before Swap: "<<c<<" "<<d<<endl;
    smd.swapWithOutThirdVariable(&c,&d); 
    cout<<"After Swap: "<<c<<" "<<d;
    return 0;
}