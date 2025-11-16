//Finding out how many times each element appears in the array using a map

#include<iostream>
#include<map>
using namespace std;

int main(){
    //Taking the array input

    cout<<"Enter the size of the array: "<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the numbers of the array: "<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    //Precompute and creating the hash map
    map<int, int>MPP;
    //Finding the number of times each element exist
    for(int i = 0; i<n; i++){
        MPP[arr[i]]++;
    }


    //Taking the number of queries 
    int queries;
    cout<<"How many numbers you want to find?: ";
    cin>>queries;

    cout<<"Enter the numbers to find their occurences: ";
    while(queries--){
        //Taking the input of the numbers
        int num;
        cin>>num;

        //Fetching the values
        cout<<MPP[num]<<endl;
    }
}