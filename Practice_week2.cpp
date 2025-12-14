//You are given an array Find:
/*
i) Min of the array
ii) Last Index where the min is present
iii) First Index where the min is present
iV) Count the freq.of the min in the array

RESTRICTION: ONLY O(N) complexity
*/


#include<bits/stdc++.h>
using namespace std;

void solve(){
    //Give the size
    int n;
    cin>>n;

    vector<int>arr(n);

    //Taking input of the array

    for(int i = 0 ; i<n; i++){
        cin>>arr[i];
    }
    

    //Initialising minValue and their positions

    int minVal = INT_MAX;
    int lastIndex = -1;
    int first_index = -1;
    int freqCounter = 0;

    for(int i = 0; i<n; i++){
        if(arr[i] < minVal){
            minVal = arr[i];

            //Finding for the first time, update the position nd counter

            first_index = i;
            freqCounter = 1;
        }

        else if(minVal == arr[i]){
            //Finding for more times, update the last index and the counter
            lastIndex = i;
            freqCounter ++;
        }
    }

    //Print the results

    cout<<"Min value: "<<minVal<<'\n';
    cout<<"Last Index: "<<lastIndex<<'\n';
    cout<<"First Index: "<<first_index<<'\n';
    cout<<"Frequency: "<<freqCounter<<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    solve();
}