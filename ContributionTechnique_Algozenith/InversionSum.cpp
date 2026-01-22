//Given an Arr[] of N integers. calculate the sume of inversion counts of all possible subarrays
#include<bits/stdc++.h>
using namespace std;

int inversionSum(vector<int>& arr){
    int n = arr.size();

    int ans = 0;

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i]>arr[j]){
                ans+=(i+1)*(n-j);
            }
        }
    }

    return ans;
}
