//LEETCODE121
//You are given an array prices where prices[i] is the price of a given stock on the ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0


#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& nums){
    int maxProfit = 0;
    int n = nums.size();
    int bestBuy = nums[0];

    for(int i = 1; i<n; i++){
        if(nums[i]>bestBuy){
            maxProfit = max(maxProfit, (nums[i]-bestBuy));
        }

        bestBuy = min(bestBuy, nums[i]);
    }

    return maxProfit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};

    int maximum = maxProfit(prices);
    cout<<maximum;

}