#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;

class DuplicateNumber {
    public: 
        int duplicateNumber(vector<int>& nums) {
            int res=0;
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                    res=nums[i]; 
                    break;
                }
            }
            return res;
        }
};

int main() {
    DuplicateNumber DN;
    vector<int> inputArray = {3,1,3,4,2};
    cout<<DN.duplicateNumber(inputArray);
}