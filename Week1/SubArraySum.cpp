//Return the sum of the subarrays

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int returnSubArraySum(vector<int>& vec){

    

    int total = 0;
    int n = vec.size();

    //Using the brute force - (O(n)2)
    // for(int start = 0; start<n; start++){
    //     int sum = 0;

    //     for(int end = start; end<n; end++){
    //         sum+= vec[end];
    //         total += sum;
    //     }
    // }

    //USING COMBINATION TECHNIQUE(O(n))

    for(int i= 0; i<n; i++){
        total += vec[i] * (i+1) * (n-i);
    }

    return total;

}


int main(){
    vector<int>arr = {1, 2, 3};
    int ans = returnSubArraySum(arr);
    cout<<ans;
}