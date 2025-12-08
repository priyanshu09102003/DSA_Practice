//Q) You are given an array. Return the number of subarrays

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

void returnCountOfSubarrays(){
    int n;
    cin>>n;

    int ans = (n*(n+1))/2;

    cout<<"The number of possible subarrays are: ";
    cout<< ans;
}

int main(){
    returnCountOfSubarrays();
}