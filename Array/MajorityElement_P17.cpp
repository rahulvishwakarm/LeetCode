#include<iostream>
#include<map>
#include<vector>
using namespace std;

class MajorityElement {
    public:
        int majorityElement(vector<int> &nums)
        {
            int min = 0, num = 0;
            map<int, int> mapTemp;
            for (int i = 0; i < nums.size(); i++)
            {
                mapTemp[nums[i]]++;
            }
            for (auto ip : mapTemp)
            {
                if (ip.second > min)
                {
                    min = ip.second;
                    num = ip.first;
                }
            }
            return num;
        }
};

int main() {
    MajorityElement ME;
    vector<int> inputArray = {3,2,3};
    cout<<ME.majorityElement(inputArray);
}