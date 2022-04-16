#include<bits/stdc++.h>
#include<iostream>
#include<vector> 
using namespace std;

class ContainsDuplicateElement {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(),nums.end());
            for(int i=1;i<nums.size();i++) {
                if(nums[i]==nums[i-1]) {
                    return true;
                }
            }
            return false;
        }
};

int main() {
    ContainsDuplicateElement CE;
    vector<int> inputArray = {1,2,3,1};
    if(CE.containsDuplicate(inputArray)) {
        cout<<"Duplicate Elements Found!!";
    } else {
        cout<<"Does not contain duplicate element!!";
    }
}