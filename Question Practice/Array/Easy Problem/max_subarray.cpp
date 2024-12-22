#include <bits/stdc++.h>
using namespace std;

int maxsub(vector<int> nums){
    int maxsum=INT_MIN;
    int currsum=0;

    for(int i=0;i<nums.size();i++){
        currsum=currsum+nums[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0)currsum=0;
    }
    return maxsum;
}

int main(){
    vector<int> nums={2,3,-8,5,8,-10,20};
    int result=maxsub(nums);
    cout<<result<<endl;
    return 0;
}