//LEETCODE_169_MAJORITY ELEMENT

//Given an array nums of size n, return the majority element.The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<iostream>
#include<vector>

using namespace std;

int MajorityElement(vector<int> &nums){
    int n = nums.size();

    int ans = 0;
    int freq = 0;

    for(int i = 0; i<n; i++){
        if(freq == 0){
            ans = nums[i];
        }

        if(ans == nums[i]){
            freq++;
        }

        else{
            freq --;
        }
    }

    return ans;

}

int main(){
    vector<int>vec = {2,2,1,1,1,2,2};

    int majorElement = MajorityElement(vec);

    cout<<majorElement<<endl;
}