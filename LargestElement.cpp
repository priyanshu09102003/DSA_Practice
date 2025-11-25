//Given an array of integers nums, return the value of the largest element in the array

#include<iostream>
#include<vector>

using namespace std;

int largestElementInArray(vector<int>& nums){
    int largest = nums[0];
    int n = nums.size();
    for(int i=0;  i<n; i++){
        if(nums[i]>largest){
            //Update the largest
            largest = nums[i];
        }
    }

    return largest;
}

int main(){
    vector<int> arr = {3, 3, 6, 1};

    cout<<"Largest element is: ";
    int ans = largestElementInArray(arr);
    cout<<ans;
}