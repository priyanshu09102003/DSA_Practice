#include<iostream>
#include<vector>

using namespace std;


void insertionSortAlgorithm(vector<int>& vec){
    int n = vec.size();

    for(int i = 0; i<=n-1; i++){
        int j = i;

        while(j>0 && vec[j-1]>vec[j]){

            //Swap
            int temp = vec[j-1];
            vec[j-1] = vec[j];
            vec[j] = temp;

            j--;
        }
    }
}


int main(){
    vector<int> nums = {7, 4, 1, 5, 3};
    cout<<"Unsorted array: ";
    for(int i = 0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    insertionSortAlgorithm(nums);
    cout<<endl;
    cout<<"Sorted Array: ";
    for(int i = 0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}