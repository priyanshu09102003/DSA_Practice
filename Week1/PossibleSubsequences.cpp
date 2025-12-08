//Given an array of size N of distinct elements. Return the count of the possible subequences

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

void subsequences(){
    int n;
    cin>>n;

    //Define a long answer variable

    long long ans = 1;

    for(int i = 0; i<n; i++){

        ans = ans*2;
    }

    cout<<"The number of possible subsequences are: ";
    cout << ans-1 << endl;
}

int main(){
    cout<<"Enter the size of the array: ";
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    subsequences();
}