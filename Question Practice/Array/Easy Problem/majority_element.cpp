#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n=nums.size();
    // map<int,int> freq;
    int freq=1;
    for(int i=1;i<n;i++){
        if(nums[i]==nums[i-1])freq++;
        else {
            freq=1;
            
        };

        if(freq>(n/2))return nums[i];
    }

    // for(auto freq : itr){
    //     if(itr.second>(n/2)) return itr.first;
    // }
    return 0;
}

int main(){
    vector<int> nums={}
    return 0;
}