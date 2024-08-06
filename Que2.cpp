// Find the number that occurs twice and the number that is missing and return them in the form
// of an array. [Leetcode 645]
#include<iostream>
#include <vector>
using namespace std; 
int main()
{
    int nums[]={2,1,2,4};
    int n=sizeof(nums)/sizeof(nums[0]);
    int i=0;
    // for(int i=0;i<n;i++) cout<<nums[i]<<" ";
    // cout<<endl;
    for(int i=0;i<n;i++){
        while(nums[i]!=nums[nums[i]-1]){
            swap(nums[i],nums[nums[i]-1]);
        }
    }
    // for(int i=0;i<n;i++) cout<<nums[i]<<" ";
    // cout<<endl;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            ans.push_back(nums[i]);
            ans.push_back(i+1);
            break;
        }
    }
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}