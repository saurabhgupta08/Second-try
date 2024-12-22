#include <bits/stdc++.h>
using namespace std;

 int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high =n-1;
        int position;

        while (low<=high)
        {
            int mid=low + (high-low)/2;
            position=mid;

            if(nums[mid]==target){
                return mid;
            }
            else if (nums[mid]>target)
            {
                high=mid-1;
            }
            else{
                low=mid+1;
                position++;
            }
            
        }
        return position;
    }

int main(){

    return 0;
}