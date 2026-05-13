#include<bits/stdc++.h>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i){

    //If all the elements arre included, return
    if(i == arr.size()){
        for(int val : ans){
            cout<< val << " ";
        }
        cout<<'\n';
        return;
    }


    //Printing to include the elements in the arr
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i+1);

    //Excluding the elements from the arr
    ans.pop_back();
    printSubsets(arr, ans, i+1);

}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans;

    printSubsets(arr, ans, 0);

}