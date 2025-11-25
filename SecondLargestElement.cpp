//Given an array of integers nums, return the second-largest element in the array. If the second-largest element does not exist, return -1.

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int secondLargestElement(vector<int>& nums){
    int largest = nums[0];
    int secondLargest = INT_MIN;
    int n = nums.size();

    for(int i = 0; i<n; i++){
        if(nums[i]>largest){
            secondLargest = largest;
            largest = nums[i];
        }

        else if((nums[i] < largest) && (nums[i]>secondLargest)){
            secondLargest = nums[i];
        }

      
    }

    if(secondLargest == INT_MIN){
        return -1;
    }

    return secondLargest;
}

int main(){
    vector<int> arr = {3, 3, 6, 1};

    cout<<"Second Largest element is: ";
    int ans = secondLargestElement(arr);
    cout<<ans;
}