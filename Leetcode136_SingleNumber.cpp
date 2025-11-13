// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
#include<iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums){
    //Taking an integer variable ans and initialising it with 0

    int ans = 0;

    for(int val : nums){
        ans = ans ^ val;
    }

    return ans;
}

int main(){
    vector<int> vec = {4,1,2,1,2};

    int result = singleNumber(vec);

    cout<<result<<endl;
}