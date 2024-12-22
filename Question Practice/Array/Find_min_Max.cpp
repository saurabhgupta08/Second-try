#include<bits/stdc++.h>
using namespace std;

 pair<long long, long long> getMinMax(long long a[], int n) {
        long long  mini =INT_MAX;
        long long  maxi =INT_MIN;
        
        for(int i =0; i<n;i++){
            //min
            if(a[i]<mini){
                mini=a[i];
            }
            
            //max
            if(a[i]>maxi){
                maxi=a[i];
            }
        }
        
        pair<long long ,long long> ans;
        ans.first=mini;
        ans.second=maxi;
        
        return ans;
    }

int main(){
    int n;
    cin>>n;
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    pair<long long ,long long> ans=getMinMax(arr,n);

    cout<<ans.first<<" "<<ans.second<<" ";
    
}