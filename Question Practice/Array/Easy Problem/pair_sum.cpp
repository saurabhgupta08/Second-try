#include <bits/stdc++.h>
using namespace std;

//for sorted Array

vector<int> pairsum(vector<int> nums,int target){
    int s=0,e=nums.size()-1;
    while(s<e){
            if(nums[s]+nums[e]==target) return {s,e};
            else if(nums[s]+nums[e]<target) s++;
            else e--;
        }
    return {-1};
}

//for unsorted array using hashing 
vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        int n = nums.size();

        // Build the hash table
        for (int i = 0; i < n; i++) {
            numMap[nums[i]] = i;
        }

        // Find the complement
        for (int i = 0; i < n; i++) {
            int complement = target - nums[i];
            if (numMap.count(complement) && numMap[complement] != i) {
                return {i, numMap[complement]};
            }
        }

        return {}; // No solution found
    }

int main(){
    vector<int> arr={2,7,11,15};
    vector<int> res=pairsum(arr,18);
    cout<<res[0]<<","<<res[1];
    return 0;
}