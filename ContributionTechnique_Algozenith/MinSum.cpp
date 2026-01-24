//Given an arr(n) and int k. Find the smallest value of (arr[i] + arr[j]) s.t (arr[i] + arr[j]) >= k

#include<bits/stdc++.h>
using namespace std;

int smalllestSum(vector<int>& arr, int K){
    sort(arr.begin(), arr.end());

    int minSum = INT_MAX;
    bool isFound = false;
    int n = arr.size();

    if(n<2) return -1; //Minimum we need 2 elements

    for(int i = 0; i<n-1; i++){

        //Fix the i value and find a min J value
        int jValue = K - arr[i];

        int low = i+1;
        int high = n-1;

        //Initiliaing the position of the value that no better jValue is found.
        int pos = -1;

        while(low<=high){
            int mid = low+(high-low)/2;

            if(arr[mid]>=jValue){
                //If we find a jValue, update the position of that value
                pos = mid;

                //Search for smaller
                high = mid-1;
            }

            else{
                //Search for greater

                low = mid+1;
            }
        }

        if(pos!=-1){
            isFound = true;
            minSum = min(minSum, (arr[i] + arr[pos]));
        }
    }

    return isFound ? minSum : -1;
}

int main(){
    vector<int> arr = {1, 6, 3, 10, 7};
    int K = 5;

    int result = smalllestSum(arr, K);

    cout<<result;
}