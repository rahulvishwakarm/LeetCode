#include<iostream>
#include<vector>
using namespace std; 

class JumpGame2 {
    public:
        int jump(vector<int>& nums) {
            int currentVal = 0;
            int jumpVal = 0;
            int minJumps = 0;
            for(int i=0;i<nums.size()-1;i++) {
                jumpVal = max(jumpVal,i+nums[i]);
                if(currentVal==i) {
                    minJumps++;
                    currentVal = jumpVal;
                }
            }
            return minJumps;
        }
};

int main() {
    JumpGame2 JG2;
    vector<int> inputArray = {2,3,1,1,4};
    cout<<JG2.jump(inputArray);
}