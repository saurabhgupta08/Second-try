#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int nums[],int n) {
        //using liner search
        // for(int i=0;i<n;i++){
        //     if((i==0 || nums[i-1]<nums[i]) && (i==n-1 || nums[i+1]<nums[i])) 
        //     {
        //         return i;
        //     }
            
        // }
        // return -1;

        
    } 

int main(){
    int n;
    cin>>n;

    int arr[n];
    
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    

    cout<<findPeakElement(arr,n);
    return 0;
}