#include<bits/stdc++.h>
#include<iostream>
#include<vector> 
using namespace std;

class ContainsDuplicate2Element {
    public:
        bool containsDuplicate2(vector<int>& nums, int k) {
            // sort(nums.begin(),nums.end());
            // for(int i=1;i<nums.size();i++) {
            //     for(int j=i+1;nums.size();i++) {
            //         if((nums[i]==nums[j]) && abs(i-j)<=k) {
            //             return true;
            //         }
            //     }
            // }
            // return false;
            unordered_map<int,int> mp;
            bool ans=false;
            for(int i=0;i<nums.size();i++)
            {
                if(mp.find(nums[i])!=mp.end() && abs(i-mp[nums[i]])<=k)
                {
                    return true;
                }
                mp[nums[i]]=i;
            }
            return false;
        }
};

int main() {
    ContainsDuplicate2Element CE;
    vector<int> inputArray = {1,2,3,1,2,3};
    if(CE.containsDuplicate2(inputArray,2)) {
        cout<<"Duplicate Elements Found!!";
    } else {
        cout<<"Does not contain duplicate element!!";
    }
}
