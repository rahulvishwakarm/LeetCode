#include <iostream>
using namespace std;

class OddEven {
    public:
        bool Odd_Even(int num) {
            // if(num&1) {
            //     return false;
            // }
            if(num%2!=0) {
                return false;
            }
            return true;
        }
};

int main()
{       
    OddEven odv;
    int trg; 
    cout<<"Enter the number: ";
    cin>>trg;
    if(odv.Odd_Even(trg)) {
        cout<<"Even Number!!";
    } else {
        cout<<"Odd Number";
    }
}