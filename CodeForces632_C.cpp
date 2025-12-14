/*

C. The Smallest String Concatenation
time limit per test3 seconds
memory limit per test256 megabytes
You're given a list of n strings a1, a2, ..., an. You'd like to concatenate them together in some order such that the resulting string would be lexicographically smallest.

Given the list of strings, output the lexicographically smallest concatenation.

Input
The first line contains integer n — the number of strings (1 ≤ n ≤ 5·104).

Each of the next n lines contains one string ai (1 ≤ |ai| ≤ 50) consisting of only lowercase English letters. The sum of string lengths will not exceed 5·104.

Output
Print the only string a — the lexicographically smallest string concatenation.

Examples
InputCopy
4
abba
abacaba
bcd
er
OutputCopy
abacabaabbabcder

5
x
xx
xxa
xxaa
xxaaa
OutputCopy
xxaaaxxaaxxaxxx
InputCopy
3
c
cb
cba
OutputCopy
cbacbc




*/

#include<bits/stdc++.h>
using namespace std;

bool comparator(string a, string b){
    return a+b < b+a;
}

void solve(){
    int size;
    cin>>size;
    string arr[size];

    for(int i = 0; i<size ; i++){
        cin>>arr[i];
    }

    sort(arr, arr+size, comparator);

    for(int i = 0; i<size; i++){
        cout<<arr[i];
    }
}


int main(){
    solve();
}
