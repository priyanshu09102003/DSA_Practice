#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    if(n==0 || n==1) return 1;

    int ans = n*factorial(n-1);
    return ans;
}

int main(){
    cout<<"Enter the number to print its factorial: ";
    int n;
    cin>>n;

    cout<<factorial(n);
}