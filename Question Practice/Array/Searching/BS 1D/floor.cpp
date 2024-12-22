#include <bits/stdc++.h>
using namespace std;

int findFloor(vector<long long> v, long long n, long long x){
        
        long long low=0;
        long long high=n-1;
        int ans=-1;
        while(low<=high){
            
            int mid=low+(high-low)/2;
            
            if(v[mid]<=x) {
                ans=mid;
                low=mid+1;
            }
           
            else high=mid-1;
        }
        
        return ans;
        
    }

int main(){

    return 0;
}