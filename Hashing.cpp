#include <iostream>
using namespace std;

int main(){
    //Taking the array

    int arr[] = {1,3,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    //Building the hash array and storing 0 at each index

    int hash[13] = {0};
    //Looping to the array and incrementing the 0 with 1 if the number is found
    for(int i = 0; i<n; i++){
        hash[arr[i]] +=1;
    }

    //Taking the numbers input

    int q;
    cin>>q;

    while(q--){
        int num;
        cin>>num;

        //Returning the number of times they appear in the array
        cout<<hash[num]<<endl;
    }

}