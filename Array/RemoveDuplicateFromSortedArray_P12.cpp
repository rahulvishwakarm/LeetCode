#include<iostream>
#include<vector>
#include<set>
using namespace std;

// Brut Force Approach
class RemoveDuplicateFromSortedArray_BrutForce {
    public:
        int removeDuplicates(vector<int>& nums) {
            set<int> s;
            for(int num : nums) {
                s.insert(num);
            }
            vector<int>().swap(nums);
            for(int num : s) {
                nums.push_back(num);
            }
            return s.size(  );
        }
};

// Optimised Approach
// Two pointer approach
class RemoveDuplicateFromSortedArray_Optimised {
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
    RemoveDuplicateFromSortedArray_BrutForce RDFR;
    vector<int> inputArray = {0,0,1,1,1,2,2,3,3,4};
    cout<<RDFR.removeDuplicates(inputArray);
    RemoveDuplicateFromSortedArray_Optimised RDFD;
    cout<<RDFD.removeDuplicates(inputArray);
}