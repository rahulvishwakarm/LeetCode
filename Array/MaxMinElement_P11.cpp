#include<iostream>
#include<vector>
using namespace std;

class MaxMinElement_P11 {
    public:
        int max(vector<int>& nums) {
            int maxElem = 0;
            for(int i=0;i<nums.size();i++) {
                if(nums[i]>maxElem) {
                    maxElem = nums[i];
                }
            }
            return maxElem;
        }

        int min(vector<int>& nums) {
            int minElem = 0;
            for(int i=0;i<nums.size();i++) {
                if(nums[1]<minElem) {
                    minElem = nums[i];
                }
            }
            return minElem;
        }
};

int main() {
    MaxMinElement_P11 MME;
    vector<int> inputArray = {2,3,1,1,4};
    cout<<MME.max(inputArray)<<endl;
    cout<<MME.min(inputArray)<<endl;
}