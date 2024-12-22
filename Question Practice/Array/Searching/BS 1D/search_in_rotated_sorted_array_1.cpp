#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low=0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target)return mid;

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
        return -1;
    }

int main(){

    vector<int>arr={4,5,1,2,3};
    cout<<search(arr,3)<<endl;

    return 0;
}