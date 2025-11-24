#include <iostream>
#include <vector>
using namespace std;

// Forward declaration
void mergeArrays(vector<int>& arr, int low, int mid, int high);

void mergeSortAlgorithm(vector<int>& arr, int low, int high){
    // Stopping condition (for single elements in the array)
    if(low >= high) return;
    
    // Defining the mid to divide the array
    int mid = (low + high) / 2;
    
    // Calling the merge sort for the left sorted arrays
    mergeSortAlgorithm(arr, low, mid);  
    
    // Calling the merge sort for the right sorted arrays
    mergeSortAlgorithm(arr, mid+1, high);
    
    // After sorting, merge them by the merge algo
    mergeArrays(arr, low, mid, high);
}

// Merge Algorithm
void mergeArrays(vector<int>& arr, int low, int mid, int high){
    // Temporary array
    vector<int> temp;
    int left = low;      // Left sorted array starting point
    int right = mid+1;   // Right sorted array starting point
    
    while((left <= mid) && (right <= high)){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    
    // Add if left elements are left
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    
    // Add if the right elements are left
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }
    
    // Copying into the main array
    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];  
    }
}

int main(){
    vector<int> nums = {7, 4, 1, 5, 3};
    
    cout << "Unsorted array: ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    
    mergeSortAlgorithm(nums, 0, nums.size() - 1);
    
    cout << "Sorted array: ";
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}