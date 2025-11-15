
#include<iostream>
using namespace std;

//Q1)Print Name N times using recursion

// void printName(int i, int n){
//     //stopping condition

//     if(i>n) return;

//     cout<<"Priyanshu"<<endl;
//     printName(i+1, n);
// }

// int main(){
//     int n;

//     cout<<"Enter the number of times you want to print the name: ";
//     cin>>n;
//     printName(1, n);
// }


//Q2)Print linearly from 1 -> N

// void printNumbers(int i, int n){
//     //Stopping condition

//     if(i>n) return;

//     cout<<i<<endl;
//     printNumbers(i+1, n);
// }

// int main(){
//     int n;
//     cin>>n;
//     printNumbers(1, n);
// }

//Q3)Print backwards from N -> 1;

void printBackwards(int i, int n){
    if(i<1)return;

    cout<<i<<endl;
    printBackwards(i-1, n);
}

int main(){
    int n;
    cin>>n;

    printBackwards(n, 1);
}