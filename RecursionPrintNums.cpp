
#include<bits/stdc++.h>
using namespace std;

//Print the numbers from n-1

// void printFromNto1(int n){
//     //Stopping condition
//     if(n == 0) return;

//     cout<<n<<'\n';
//     printFromNto1(n-1);
// }


// Prin from 1 - n (using 2 variables)

// void printFrom1ToN(int x, int n){

//     if(x>n) return;

//     cout<<x<<'\n';
//     printFrom1ToN(x+1, n);
// }

//Using 1 variable
void printFrom1ToN(int n){
    if(n==0)return;
    printFrom1ToN(n-1);
    cout<<n<<'\n';
}

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;

    printFrom1ToN(n);

}