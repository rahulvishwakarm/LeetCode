#include<bits/stdc++.h>
using namespace std;

class FourSum {
    public:
        vector<vector<int>> four_Sum(vector<int>& inputArray) {
            // To get the unique triplets
            set<vector<int>> returnArray;
            sort(inputArray.begin(),inputArray.end());
            vector<int> temp;
            temp.resize(4);
            for(int i=0;i<inputArray.size();i++) {
                for(int j=i+1;j<inputArray.size();j++) {
                    if(binary_search(inputArray.begin()+j+1,inputArray.end(),-inputArray[i]-inputArray[j])) {
                        temp[0]=inputArray[i],temp[1]=inputArray[j],temp[2]=-inputArray[i]-inputArray[j],temp[3]=-inputArray[i]-inputArray[j];
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
    FourSum four_Sum;
    vector<int> vcInt = {-1,0,1,2,-1,-4};
    vector<vector<int>> accessArray = four_Sum.four_Sum(vcInt);
    four_Sum.TraverseArray(accessArray);
    return 0;
}