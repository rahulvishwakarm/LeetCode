#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class MinBinary {
    public:
        int findMin(vector<int> nums) {
            int start = 0;
            int end = nums.size()-1;
            int mid;
            int ans = INT_MAX;
            while(start<=end) {
                mid = (start + end)/2;
                ans = min(ans,nums[mid]);
                if(nums[mid]>nums[end]) {
                    start = mid + 1;
                } else {
                    end = mid - 1;
                }
            }
            return ans;
        }
};

int main() {
    MinBinary MB;
    vector<int> inputArray = {3,4,5,1,2};
    cout<<MB.findMin(inputArray);
}