#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    int n=INT_MIN;
    for(int i=1;i<n;i++){
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
            else{
                break;
            }
        }
    }
        
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    insertionSort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
