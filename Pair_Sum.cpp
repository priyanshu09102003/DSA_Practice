//Return the pair whose sum matches the target sum

#include<iostream>
#include<vector>

using namespace std;

//BRUTE FORCE

// vector<int>pairSum(vector<int>& nums, int target){

//     vector<int>ans;

//     for(int i = 0; i<nums.size(); i++){
//         for(int j = i+1; j<nums.size(); j++){
//             if(nums[i] + nums[j] == target){
//                 ans.push_back(i);
//                 ans.push_back(j);

//                 return ans;
//             }
//         }
//     }

//     return ans;
// } 

//OPTIMAL APPROACH

vector<int>pairSum(vector<int>& nums, int target){

    vector<int>ans;

    int n = nums.size();

    //Taking two pointers

    int i = 0; int j = n-1;

    while(i<j){
        int pairSum = (nums[i] + nums[j]);

        if(pairSum < target){
            i++;
        }

        else if(pairSum > target){
            j--;
        }

        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }

    return ans;


}

int main(){
    vector<int> vec = {2,7,11, 15};
    int target = 9;

    vector<int> ans = pairSum(vec, target);

    cout<<ans[0]<<", "<<ans[1];
}