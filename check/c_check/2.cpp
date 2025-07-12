#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void  print(vector<vector<int>> &arr)
{
    for(auto i: arr){
        for(auto j: i)
            cout<< j<<"  ";
        cout<<"\n"; 
    }
}


void sub(int ind ,vector<int> &arr, vector<vector<int>> &ans, vector<int> &nums){
    if(ind==nums.size()){
        ans.push_back(arr);
        return;

    }
    arr.push_back(nums[ind]);
    sub(ind+1, arr, ans, nums);
    arr.pop_back(); 

    for(int j= ind+1 ;j<nums.size();j++ ){
        if(nums[j]!=nums[ind]){
            sub(j, arr, ans, nums);
            return;
        }
    }

    sub(nums.size(), arr,ans, nums); 
}



int main(){
    vector<int> arr={1, 2,2};
    vector<vector<int>> ans; 
    vector<int> ds; 
    sub(0 ,ds, ans, arr);
    
    print(ans);


    
   
    return 1;
};