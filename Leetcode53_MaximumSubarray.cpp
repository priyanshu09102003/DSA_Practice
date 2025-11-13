//Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int maxSubArraySum(vector<int>& nums){

    //Implementing Kadane's Algorithm
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int val : nums){
        currentSum = currentSum + val;
        maxSum = max(currentSum, maxSum);
        
        //if currentSum goes below 0, reset to 0

        if(currentSum < 0){
            currentSum = 0;
        }
    }

    return maxSum;


}

int main(){
    vector<int> vec = {-2,1,-3,4,-1,2,1,-5,4};

    int result = maxSubArraySum(vec);

    cout<<result<<endl;
}