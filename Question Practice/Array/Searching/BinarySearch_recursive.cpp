#include <bits/stdc++.h>
using namespace std;

// Recursive 
int BinarySearch(vector<int> arr , int tar, int st,int end){
    if(st<=end){
        int mid= st + (end-st)/2;

        if(arr[mid]>tar){
            return BinarySearch(arr,tar,st,mid-1);
        }else if(arr[mid]<tar){
            return BinarySearch(arr,tar,mid+1,end);
        }else{
            return mid;
        }
        
    }else{
        return -1;
    }
}

int main(){

    return 0;
}