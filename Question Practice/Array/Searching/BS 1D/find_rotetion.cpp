#include <bits/stdc++.h>
using namespace std;

int findKRotation(int arr[], int n) {
	    for(int i=0;i<n-1;i++){
	        if(arr[i]>arr[i+1]){
	            return i+1;
	        }
	    }
	    return 0;
	}

int main(){

    return 0;
}