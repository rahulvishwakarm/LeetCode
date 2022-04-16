#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

class PlusOne {
    public:
        vector<int> plusOne(vector<int>& v) {
            vector<int> ans;
            int carry = 1;
            int n = v.size();
            for(int i=0;i<n;i++){
                ans.push_back(v[i]);
            }
            reverse(ans.begin(),ans.end());
            for(int i=n-1,j=0;i>=0;i--,j++){
                if(v[i] == 9){
                    ans[j] = 0;
                    carry = 1;
                }
                else{
                    ans[j] = ans[j] + carry;
                    break;
                }
                if(v[i] == 9 and i == 0){
                    ans.push_back(1);
                }
            }
            reverse(ans.begin(),ans.end());
            return ans;
            }
};

int main() {

}