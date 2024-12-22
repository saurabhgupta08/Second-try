#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}



void rotateArray(int arr[],int n,int d){
    // d=d%n;
    // if(d!=0){
    //     int temp[n];
    //     for(int i=0,j=d;j<n;i++,j++){
    //         temp[i]=arr[j];
    //     }

    //     for(int i=n-d,j=0;i<n;j++,i++){
    //         temp[i]=arr[j];
    //     }

    //     for(int i=0;i<n;i++){
    //         arr[i]=temp[i];
    //     }
    // }

    
    // another approach
    d=d%n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
   
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int d;
    cin>>d;

    rotateArray(arr,n,d);


    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}