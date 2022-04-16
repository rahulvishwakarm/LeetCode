#include<iostream>
using namespace std;

class HillClimbing {
    public:
        int hillClimbing(int n) {
            if(n<=2) {
                return n;
            }
            int a = 1;
            int b = 2;
            int i,c;
            for(int i=3;i<=n;i++) {
                c = a + b;
                a = b;
                b = c;
            }
            return c;
        }
};

int main() {
    HillClimbing HC;
    cout<<HC.hillClimbing(3);
}