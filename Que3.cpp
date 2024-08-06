// Given an integer array nums of length n where all the integers of nums are in the range [1,
// n] and each integer appears once or twice, return an array of all the integers that appears
// twice.You must write an algorithm that runs in O(n) time and uses only constant extra space.[Leetcode 442]
// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]
// Example 2:
// Input: nums = [1,1,2]
// Output: [1]
#include<iostream>
#include <vector>
using namespace std;
int main()
{   
     int nums[]={4,3,2,7,8,2,3,1};
    int n=sizeof(nums)/sizeof(nums[0]);
    int i=0;
    for(int i=0;i<n;i++) cout<<nums[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++){
        while(nums[i]!=nums[nums[i]-1]){
            swap(nums[i],nums[nums[i]-1]);
        }
    }
    for(int i=0;i<n;i++) cout<<nums[i]<<" ";
    cout<<endl;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(nums[i]!=i+1){
            ans.push_back(nums[i]);
        }
    }
      for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
    return 0;
}