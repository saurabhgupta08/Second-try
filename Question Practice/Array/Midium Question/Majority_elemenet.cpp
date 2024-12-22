#include <bits/stdc++.h>
using namespace std;

int majorityEle(int arr[],int n){
    map<int,int> mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
    
    
    int m=(n/2);
   
    for(auto item : mapp){
        if(item.second>m) return item.first;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<majorityEle(arr,n)<<endl;

    return 0;
}