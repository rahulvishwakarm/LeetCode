#include<iostream>
#include <vector>
#include <map>
using namespace std;

// BrutForrce Method
class TwoSsumBrutForce {
    public:
        vector<int> twoSum(vector<int>& inpArray,int target) {
            vector<int> pairs;
            for(int a=0;a<inpArray.size();a++) {
                for(int b=a+1;b<inpArray.size();b++) {
                    cout<<a<<b<<endl;
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
class TwoSsumOptimized {
    public:
        
};

int main() {
    TwoSsumBrutForce twoSum;
    vector<int> mainArray = {2,0,9,16,15};
    int trgt = 17;
    vector<int> mapItr = twoSum.twoSum(mainArray,trgt);
    cout << "pair indices are : " << mapItr[0] << " " << mapItr[1] << endl;
    return 0;
}