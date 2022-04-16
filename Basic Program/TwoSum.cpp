#include <iostream>
#include <bits/stdc++.h>
using std::map;
using std::vector;
using namespace std;

// BrutForce Method
class TwoSsum {
    public:
        vector<int> twoSum(vector<int>& inpArray,int target) {
            vector<int> pairs;
            for(int a=0;a<inpArray.size();a++) {
                for(int b=a+1;b<inpArray.size();b++) {
                    // cout<<a<<b<<endl;
                    if(inpArray[b]==target-inpArray[a]) {
                        pairs.push_back(a);
                        pairs.push_back(b);
                    }
                }
            }
            return pairs;
        }
};

// Optimized Method
class TwoSum {
    public:
        vector<int> two_sum(vector<int> &nums, int target)
        {
            map<int,int> mp;
            vector<int> vct;
            int n = nums.size();
            for(int i=0;i<n;i++) {
                int diff = target - nums[i];
                if(mp.find(diff)!=mp.end()) {
                    auto p = mp.find(diff);
                    vct.push_back(p->second);
                    vct.push_back(i);
                }
                mp.insert(std::make_pair(nums[i],i));
            }
            return vct;
        }
};

int main()
{
    // Optimized Method
    TwoSum to_sum;
    vector<int> nums = {1, 4, 3, 6, 5, 8};
    vector<int> pair = to_sum.two_sum(nums, 6);
    cout << "pair indices are : " << pair[0] << " " << pair[1] << endl;
    return 0;

    // BrutForce Method
    TwoSsum twoSum;
    vector<int> mainArray = {2,0,9,16,15};
    int trgt = 17;
    vector<int> mapItr = twoSum.twoSum(mainArray,trgt);
    cout << "pair indices are : " << mapItr[0] << " " << mapItr[1] << endl;
    return 0;
}