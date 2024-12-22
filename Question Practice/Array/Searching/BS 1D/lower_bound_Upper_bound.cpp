#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr,int n,int x){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]>=x){
            ans=mid;
            high=mid-1;
            //took for more small index on left
        }
        else low=mid+1; //took for right 
    }
    return ans;
}
int upperBound(vector<int> arr,int n,int x){
    int low=0,high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if(arr[mid]> x){ // <==here is change
            ans=mid;
            high=mid-1;
            //took for more small index on left
        }
        else low=mid+1; //took for right 
    }
    return ans;
}

int main(){

    return 0;
}