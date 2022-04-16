#include<iostream>
using namespace std;

class RevPalArm {
    public:
        int Reverse(int num) {
            int rem;
            int rev = 0;
            while (num!=0)
            {
                rem = num % 10;
                rev = rev*10 + rem;
                num /=10;
            }
            return rev;
        }

        void Palindrome(int num) {
            if(num==Reverse(num)) {
                cout<<"Number is Palindrome!!";
            } else {
                cout<<"Number is not Palindrome!!";
            }
        }   

        int ArmStrong(int num) {
            int rem;
            int armst=0;
            while (num!=0)
            {
                rem = num % 10;
                armst = armst + rem*rem*rem;
                num /= 10;
            }
            return armst;
        }
};

int main() {
    RevPalArm tg;
    cout<<tg.Reverse(243);
    cout<<endl;
    tg.Palindrome(121);
    cout<<endl;
    cout<<tg.ArmStrong(576);
    return 0;
}   