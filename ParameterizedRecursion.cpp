//Print the sum of first N numbers using Recursion

#include<iostream>
using namespace std;

// void printSum(int i, int sum){
//     if(i<1){
//         cout<<sum<<endl;
//         return;
//     }

//     printSum(i-1, sum+i);
// }

// int main(){
//     int num;

//     cout<<"Enter the number: ";
//     cin>>num;

//     printSum(num, 0);
// }


//Factorial of first N numbers

int factorial(int n){

    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}

int main(){
    int num;
    cin>>num;
    int ans = factorial(num);
    cout<<ans<<endl;
}