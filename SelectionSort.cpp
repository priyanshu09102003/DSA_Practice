// Given an array of integers nums, sort the array in non-decreasing order using the selection sort algorithm and return the sorted array.

#include<iostream>
#include<vector>

using namespace std;

void selectionSortAlgorithm(vector<int>& vec){
    int n = vec.size();

    //Writing the selection sort algorithm
    for(int i = 0; i<=(n-2); i++){
        //Initialising minimum with the first element
        int min = i;
        for(int j = i; j<=(n-1);j++){
            if(vec[j] < vec[min]){
                //Update the min index
                min = j;
            }
        }
        //Swap the two indexes
        int temp = vec[min];
        vec[min] = vec[i];
        vec[i] = temp;

    }
}

int main(){
    vector<int> nums = {7, 4, 1, 5, 3};
    cout<<"Unsorted array: ";
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    selectionSortAlgorithm(nums);
    cout<<endl;
    cout<<"Sorted Array: ";
    for(int i = 0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}