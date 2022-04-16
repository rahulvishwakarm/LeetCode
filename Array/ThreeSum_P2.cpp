#include<bits/stdc++.h>
// #include<iostream>
// #include<vector>
// #include<set>
using namespace std;

class ThreeSum {
    public:
        vector<vector<int>> three_sum(vector<int>& inputArray) {
            // To get the unique triplets
            set<vector<int>> returnArray;
            sort(inputArray.begin(),inputArray.end());
            vector<int> temp;
            temp.resize(3);
            for(int i=0;i<inputArray.size();i++) {
                for(int j=i+1;j<inputArray.size();j++) {
                    if(binary_search(inputArray.begin()+j+1,inputArray.end(),-inputArray[i]-inputArray[j])) {
                        temp[0]=inputArray[i],temp[1]=inputArray[j],temp[2]=-inputArray[i]-inputArray[j];
                        sort(temp.begin(),temp.end());
                        returnArray.insert(temp);
                    }
                }
            }
            vector<vector<int>> ans;
            for(auto triplet: returnArray)
                ans.push_back(triplet);
            return ans;
        }

        void TraverseArray(vector<vector<int>>& toTraverseArray) {
            for(auto triplet : toTraverseArray) 
                cout<<"["<<triplet[0]<<", "<<triplet[1]<<", "<<triplet[2]<<"]"<<"\n";
        }
};

int main() {
    ThreeSum thrSum;
    vector<int> vcInt = {-1,0,1,2,-1,-4};
    vector<vector<int>> accessArray = thrSum.three_sum(vcInt);
    thrSum.TraverseArray(accessArray);
    return 0;
}