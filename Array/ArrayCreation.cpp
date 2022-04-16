#include<iostream>
#include <array>
using namespace std;

int main() {

    // Way 1
    int arr1[] = {12,54,24,67,89,77};
    int length = sizeof(arr1)/sizeof(arr1[0]);
    for(int i=0;i<length;i++) {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    // Way 2
    array<int,10> statArray = {1,2,3,4,5,6,7,8,9};
    for(int i=0;i<statArray.size();i++) {
        cout<<statArray[i]<<" ";
    }

}