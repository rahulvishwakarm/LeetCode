#include<iostream>
#include<array>
using namespace std;

class ArrayOperation_Core {
    public:
        void array() {
            int arrInt[] = {12,42,67,89,98,75,66,22,33,44};
            // traversing
            int length = sizeof(arrInt)/sizeof(arrInt[0]);
            for(int i=0;i<length;i++) {
                cout<<arrInt[i]<<" ";
            }
        }
};  

class ArrayOperation_Container {
    public:
        void Array() {
            array<int,10> arrInt = {12,42,67,89,98,75,66,22,33,44};
            array<int,10> MockarrInt = {};
            // traversing
            for(int dta=0;dta<arrInt.size();dta++) {
                cout<<arrInt[dta]<<" ";
            }

            // at(<index>)
            cout<<endl;
            cout<<"Element At Index "<<arrInt.at(2)<<endl;

            // front()
            cout<<"Front Element: "<<arrInt.front()<<endl;

            // end()
            cout<<"End Element: "<<arrInt.back()<<endl;

            // size()
            cout<<"Size Element: "<<arrInt.size()<<endl;

            // fill(<value>)
            MockarrInt.fill(61);
            // traversing
            for(int dta=0;dta<MockarrInt.size();dta++) {
                cout<<MockarrInt[dta]<<" ";
            }
            cout<<endl;

            // <array1>.swap(<array2>)
            MockarrInt.swap(arrInt);
            cout<<"Traversing MockarrInt: ";
            for(int dta=0;dta<MockarrInt.size();dta++) {
                cout<<MockarrInt[dta]<<" ";
            }

            cout<<endl;

            cout<<"Traversing arrInt: ";
            for(int dta=0;dta<arrInt.size();dta++) {
                cout<<arrInt[dta]<<" ";
            }
            cout<<endl;
            // empty()
            cout<<MockarrInt.empty();
        }
};

int main() {
    ArrayOperation_Container arr_cont;
    arr_cont.Array();
}