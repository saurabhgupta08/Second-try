#include <bits/stdc++.h>
using namespace std;

bool search(vector<int>& nums, int target) {
    int n = nums.size();
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]==target)return true;

        if(nums[low]==nums[mid] && nums[mid]==nums[high]){
            low++;
            high--;
            continue;
        }

        // left part sorted
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && nums[mid]>=target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        // right part is sorted
        else{
            if(nums[mid]<=target && nums[high]>=target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return false;
}

int main(){
    vector<int>arr={3,1,2,3,3,3,3,3};
    cout<<search(arr,4)<<endl;
    return 0;
}