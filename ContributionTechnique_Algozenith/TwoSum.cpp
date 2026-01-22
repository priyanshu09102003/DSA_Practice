//You are given an arr[n] and an integer X. Find the no of pairs (i,j) s.t arr[i] + arr[j] = X;

#include<bits/stdc++.h>
using namespace std;

int countPairs(vector<int>& arr , int X){
    int n = arr.size();
    map<int , int>mp;

    int count = 0;

    for(int j = 0; j<n; j++){
        int i = X - arr[j];
        count = count + mp[i];
        //Add the current element to the mao before moving fwd
        mp[arr[j]]++;
    }

    return count;
}

int main(){
    
    cout<<"Enter the size of the array: ";
    int n;
    cin>>n;

    cout<<"Enter the elements of the array: ";
    vector<int> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Enter the sum: ";
    int X;
    cin>>X;

    int result = countPairs(arr, X);

    cout<<"Total possible pairs to give the required sum: "<<result;

}