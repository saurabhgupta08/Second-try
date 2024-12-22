#include <bits/stdc++.h>
using namespace std;

bool check(int nums[],int n) {
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]) count++;
        }
        if(nums[n-1]>nums[0]) count++;

        return count<=1;
    }

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<check(arr,n)<<endl;    

    
    return 0;
}