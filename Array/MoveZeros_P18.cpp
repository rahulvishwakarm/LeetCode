#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class MoveZeros {
    public:
        void moveZeroEnd(vector<int>& nums) {
            int nonZero = 0;
            for(int i=0;i<nums.size();i++) {
                if(nums[i]!=0) {
                    swap(nums[nonZero++],nums[i]);
                }
            }
        }
};

int main() {
    MoveZeros MZ;
    vector<int> inputArray = {1,2,0,4,0,6,7};   
    for(int i=0;i<inputArray.size();i++) {
        cout<<inputArray[i]<<" ";
    }
    cout<<endl;
    MZ.moveZeroEnd(inputArray);
    for(int i=0;i<inputArray.size();i++) {
        cout<<inputArray[i]<<" ";
    }
}