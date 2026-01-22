//Given an Arr[] of N integers. calculate the sum of (Arr[i] + Arr[j] + Arr[k]) for all the triplets of (i, j, k) s.t 0<=i<j<k<=N-1. 

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
