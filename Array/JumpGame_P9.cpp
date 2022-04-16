#include<iostream>
#include<vector>
using namespace std;

class JumpGame {
    public:
        bool canJump(vector<int>& nums) {
            int n = nums.size();
            int rechable = 0;
            for(int i=0;i<n;i++) {
                if(rechable<i) {
                    return false;
                }
                rechable = max(rechable,i+nums[i]);
            }
            return true;
        }
};

int main() {
    JumpGame JG;
    vector<int> inputArray = {3,2,1,0,4};
    cout<<JG.canJump(inputArray);
}