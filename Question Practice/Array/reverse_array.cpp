#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    // int s=0;
    // int e=n-1;
    // while (s<e)
    // {
    //     //swap
    //     // int tem=arr[s];
    //     // arr[s]=arr[e];
    //     // arr[e]=tem;
    //     swap(arr[s],arr[e]);

    //     s++;
    //     e--;

    // }
    for(int s =0,e=n-1;s<n/2;s++,e--){
        int tem=arr[s];
        arr[s]=arr[e];
        arr[e]=tem;
   
    }
    
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    //call function
    reverseArray(arr,n);

    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}