#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr,int n,int x){
    int low=0,high=n-1;
    int ans=n;
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

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int oneMax=0;
	    int index=-1;
	    for(int i=0;i<n;i++){
	        int countOne=m-lowerBound(arr[i],m,1);
	        
	        if(countOne>oneMax){
	            oneMax=countOne;
	            index=i;
	        }
	    }
	    return index;
	}

int main(){

    return 0;
}