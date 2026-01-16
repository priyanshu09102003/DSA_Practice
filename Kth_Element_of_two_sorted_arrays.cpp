//You are given two sorted arrays. Find the kth element of the two sorted arrays
//Eg: arr1[] = {2 , 3, 6, 7, 9}, arr2[] = {1 , 4, 8, 10} k = 4
//O/P: 4
//Exp: [1,2,3,4,5,6,7,8,9,10] (4th element is 4)

#include<bits/stdc++.h>
using namespace std;

vector<int> mergeTwoArrays(vector<int>& arr_1, vector<int>& arr_2){
    vector<int> ans;
    int n = arr_1.size();
    int m = arr_2.size();
    int i = 0;
    int j = 0;

    while(i<n && j<m){
        if(arr_1[i] < arr_2[j]){
            ans.push_back(arr_1[i++]);
        }
        else{
            ans.push_back(arr_2[j++]);
        }
    }

    while(i<n){
        ans.push_back(arr_1[i++]);
    }

    while(j<m){
        ans.push_back(arr_2[j++]);
    }

    return ans;
};

int main(){
    vector<int>arr_1 = {2 , 3, 6, 7, 9};
    vector<int>arr_2 = {1 , 4, 8, 10};
    int k = 6;

    //Merge the arrays

    vector<int> finalArr = mergeTwoArrays(arr_1, arr_2);

    if(k > 0 && k <= finalArr.size()){
        cout << finalArr[k-1];
    }
    else{
        cout << "Invalid k";
    }
}