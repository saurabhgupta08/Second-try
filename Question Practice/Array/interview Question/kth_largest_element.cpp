#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()<k)return -1;

        sort(nums.begin(),nums.end());


        // this is for largest kth in the terms of distinct element
        // vector<int> topK(k);
        // int i=1,j=nums.size()-2;
        // topK[0]=nums[nums.size()-1];
        // while(i<k){
        //     if(nums[j]!=nums[j+1]){
        //         topK[i]=nums[j];
        //         i++;
        //         j--;
        //     }else{
        //         j--;
        //     }
        // }
        
        return nums[nums.size()-k];
    }

int main(){

    return 0;
}