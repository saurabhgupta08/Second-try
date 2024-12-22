#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        // for(int i =0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {-1};


        //it will right if it's need sorted array index
        sort(nums.begin(),nums.end());
        int l=0;
        int r=n-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
                return {l,r};
            }
            else if(nums[l]+nums[r]<target){
                l++;
            }
            else{
                r--;
            }
        }
        return {-1};
    }

int main(){

    return 0;
}