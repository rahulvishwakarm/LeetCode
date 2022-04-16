#include<iostream>
#include <vector>
#include <cmath>
using namespace std;

class HouseRob {
    public:
        int houseRob(vector<int>& nums) {
            int lengthHouse = nums.size();
            int moneyRobed_even = 0;
            int moneyRobed_odd = 0;
            for(int i=0;i<lengthHouse;i=i+2) {
                if(i%2==0) {
                    moneyRobed_even = moneyRobed_even + nums[i];
                    moneyRobed_even = moneyRobed_odd > moneyRobed_even ? moneyRobed_odd : moneyRobed_even;
                } else {
                    moneyRobed_odd = moneyRobed_even  + nums[i];
                    moneyRobed_odd = moneyRobed_even > moneyRobed_odd ? moneyRobed_even : moneyRobed_odd;
                }
            }
            return moneyRobed_even > moneyRobed_odd ? moneyRobed_even : moneyRobed_odd;
        }

        // Main
        int houseRob2(vector<int>& nums) {
            int rob1 = 0; 
            int rob2 = 0; 
            for( int n : nums) { 
                int temp = std::max(rob1 + n , rob2); 
                rob1 = rob2; 
                rob2 = temp; 
            } 
            return rob2; 
        }
};

int main() {
    vector<int> houses = {2,7};
    HouseRob HRB;
    cout<<HRB.houseRob2(houses);
}