#include <iostream>
#include <vector>
using namespace std;

    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0; i < prices.size()-1; i++){
            if(prices[i] < prices[i+1]){
                profit += prices[i+1] - prices[i];
            }
        }
        return profit;
    }

int main(){
vector<int> nums;
nums.push_back(7);
nums.push_back(1);
nums.push_back(5);
nums.push_back(3);
nums.push_back(6);
nums.push_back(4);
maxProfit(nums);

}