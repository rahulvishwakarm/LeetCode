#include<iostream>
using namespace std;

class PatternProgram {
    public:
        void Pattern_1(int n) {
            /*
                *
                **
                ***
                ****
                *****
            */
            for(int row = 1; row <= n; row++) {
                // for every row , run the col
                for(int col=1;col <= row;col++) {
                    // what need to prints
                    cout<<"*"; 
                }
                //  when 1 row is printed , add new linw
                cout<<"\n";
            }
        }

        void Pattern_2(int n) {
            /*
                55555
                4444
                333
                22
                1
            */
            for(int row=n;row>=1;row--) {
                for(int col=1;col<=row;col++) {
                    cout<<row;
                }
                cout<<endl;
            }
        }

        void Pattern_3(int n) {
            /*
            *****
            *****
            *****
            *****
            *****
            */
            for(int row=1;row<=n;row++) {
                for(int col=1;col<=n;col++) {
                    cout<<"*";
                }
                cout<<endl;
            }
        }

        void Pattern_4(int n) {
            /*
                *****
                ****
                ***
                **
                *
            */
            for(int row=n;row>=1;row--) {
                for(int col=1;col<=row;col++) {
                    cout<<"*";
                }
                cout<<endl;
            }
        }

        void Pattern_5(int n) {
            /*
                1
                1 2
                1 2 3
                1 2 3 4
                1 2 3 4 5
            */
            for(int row=1;row<=n;row++) {
                for(int col=1;col<=row;col++) {
                    cout<<col<<" ";
                }
                cout<<endl;
            }
        }

        void Pattern_6(int n) {
            /*
                *
                **
                ***
                ****
                *****
                ****
                ***
                **
                *
            */
            for(int row=0;row<2*n;row++) {
                // Way 1
                int colLogic = row>n ? 2*n-row-1 : row ;
                for(int col=0; col<=colLogic; col++) {
                    cout<<"*";
                }

                // Way 2
                // if(row<=n) {
                //     for(int col=1;col<=row;col++) {
                //         cout<<"*";
                //     }
                // } else {
                //     for(int col=1;col<2*n-row+1;col++) {
                //         cout<<"*";
                //     }
                // }
                cout<<endl;
            }
        }


        void Pattern_7(int n) {
            /*
                     *
                    * *
                   * * *
                  * * * *
                 * * * * *
                  * * * *
                   * * *
                    * *
                     *
            */
            for(int row=0;row<2*n;row++) {
                // Way 1
                int colLogic = row>n ? 2*n-row : row ;
                int noOfSpaces = n - colLogic;
                
                // Printing Spaces
                for(int s=0; s<noOfSpaces; s++) {
                    cout<<" ";
                }

                for(int col=0; col<colLogic; col++) {
                    cout<<"* ";
                }
                cout<<endl;
            }
        }
};

int main() {
    PatternProgram PTRN;
    PTRN.Pattern_7(5);
}