#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>vec = {1,2,3,4,5};

    for(int start = 0; start<vec.size(); start++){
        for(int end = start; end<vec.size(); end++){
            //Printing the subarrays

            for(int i = start; i<=end; i++){
                cout << vec[i];
            }

             cout<<" ";
        }

        cout<<endl;

       
    }
}