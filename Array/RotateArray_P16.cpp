#include<iostream>
#include<vector>
using namespace std;

class RotateArray {
    public:
        void rotate(vector<int>& nums, int k) {
            int n=nums.size();
            if(n<=1)
                return;
            int temp[n],i,j=0;
            
            k=k%n;
            k=n-k;
            
            for(i=0;i<k;i++)
            {
                temp[i]=nums[i];
            }
            
            for(i=0;i<n-k;i++)
            {
                nums[i]=nums[i+k];
            }
            
            while(i<n && j<k)
            {
                nums[i]=temp[j++];
                i++;
            }
        }
};

int main() {
    RotateArray RA;
    vector<int> inputArray = {1,2,3,4,5,6,7};
    for(int i=0;i<inputArray.size();i++) {
        cout<<inputArray[i]<<" ";
    }
    cout<<endl;
    RA.rotate(inputArray,3);
    for(int j=0;j<inputArray.size();j++) {
        cout<<inputArray[j]<<" ";
    }
}