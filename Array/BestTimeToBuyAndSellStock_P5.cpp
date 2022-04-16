#include<iostream>
#include <vector>
#include <map>
using namespace std;

class BestTimeToBuyAndSellStock {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int pro = 0;
            int mini = prices[0];
            for(int i=1; i<n; i++){
                pro = max(pro,prices[i]-mini);
                mini = min(mini,prices[i]);
            }
            return pro;
        }
};


int main() {
    BestTimeToBuyAndSellStock BTTBASS;
    vector<int> mainArray = {7,6,4,3,1};
    cout<<BTTBASS.maxProfit(mainArray);
    return 0;
}