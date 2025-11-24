//Given an array of integers called nums,sort the array in non-decreasing order using the bubble sort algorithm and return the sorted array.

#include<iostream>
#include<vector>

using namespace std;

void bubbleSortAlgorithm(vector<int>& vec){
    int n = vec.size();

    for(int i = (n-1); i>=1; i--){
        for(int j = 0; j<=(i-1); j++){
            if(vec[j]>vec[j+1]){
                int temp = vec[j+1];
                vec[j+1] = vec[j];
                vec[j] = temp;
            }
        }
    }
}

int main(){
    vector<int> nums = {7, 4, 1, 5, 3};
    cout<<"Unsorted array: ";
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    bubbleSortAlgorithm(nums);
    cout<<endl;
    cout<<"Sorted Array: ";
    for(int i = 0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}