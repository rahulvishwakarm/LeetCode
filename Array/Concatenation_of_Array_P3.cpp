#include<iostream>
#include <vector>
#include <map>
using namespace std;

// BrutForrce Method
class ConcatinationArray {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            int n = nums.size();
            for(int i=0;i<n;i++) {
                nums.push_back(nums[i]);
            }
            return nums;
        }

        void Traverse_Array(vector<int> arrayToTraverse) {
            for(int inArray : arrayToTraverse) {
                cout<<inArray<<" ";
            }
        }
};


int main() {
    ConcatinationArray concatArray;
    vector<int> mainArray = {1,2,3};
    vector<int> traverseArray = concatArray.getConcatenation(mainArray);;
    concatArray.Traverse_Array(traverseArray);
    return 0;
}