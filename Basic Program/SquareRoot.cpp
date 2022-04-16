#include<bits/stdc++.h>
using namespace std;

class SquareRoot {
    public:

        // With sqrt()
        void Square_Root_With_SQRT(int num) {
            if(num==0) {
                cout<<"Square Root Of Zero is Zero!!";
                return ;
            } else { 
                auto sqrtValue = sqrt(num);
                cout<<sqrtValue;
            }
        }

        // Without sqrt()
        double Square_Root_Without_SQRT(int num) {
            double root = 0.0;
            int start = 0;
            int end = num;
            while(start<=end) {
                int middle = start + (end-start)/2;
                if(middle*middle==num) {
                    return middle;
                } else if(middle*middle>num) {
                    end = middle-1;
                }
                else {
                    start = middle+1;
                }
            }

            int precision = 6;
            double inc = 0.1;
            for(int i=0;i<precision;i++) {
                while(root*root<=num) {
                    root+=inc;
                }
                root-=inc;
                inc/=10;
            }

            return root;
        }
};

int main() {
    SquareRoot SR;
    // SR.Square_Root_Without_SQRT(456);
    cout<<SR.Square_Root_Without_SQRT(40);
}