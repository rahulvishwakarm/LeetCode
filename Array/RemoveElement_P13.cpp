#include<iostream>
#include<vector>
#include<set>
using namespace std;

class RemoveElement {
    public:
        int removeDuplicates(vector<int>& nums) {
            if(nums.size()==0) {
                return 0;
            }
            int i=0;
            for(int j=1;j<nums.size();j++) {
                if(nums[j]!=nums[i]) {
                    i++;
                    nums[i]=nums[j];
                }
            }
            return i+1;
        }
};


int main() {
    vector<int> inputArray = {0,0,1,1,1,2,2,3,3,4};
    RemoveElement REle;
    cout<<REle.removeDuplicates(inputArray);
}