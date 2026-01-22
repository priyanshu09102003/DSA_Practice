//Q) Find the sum of products of all possible subarray of an array

#include<bits/stdc++.h>
using namespace std;


int sum(vector<int>& arr){
    int total = 0;
    int currentSum = 0;

    int n = arr.size();

    for(int i = 0; i<n; i++){
        currentSum = (currentSum * arr[i]) + arr[i];
        total+= currentSum;
    }

    return total;
}

int main(){


    cout<<"Size of the arr: ";
    int n;
    cin>>n;

    vector<int> arr(n);

    cout<<"Elements of the arr: ";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    int result = sum(arr);

    cout<<"Total sum of prodcuts of the subarrays of the array: "<<result;

    
}