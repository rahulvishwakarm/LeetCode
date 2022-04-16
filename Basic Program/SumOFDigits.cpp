#include<iostream>
using namespace std;

class SumOFDigit {
    public:
        int SumDigit(int num) {
            int sumOfNumber = 0;
            int rem;
            while (num!=0)
            {
                rem = num % 10;
                sumOfNumber = sumOfNumber + rem;
                num /=10;
            }
            return sumOfNumber;
        }
};

int main() {
    SumOFDigit smd;
    cout<<smd.SumDigit(234);
    return 0;
}