#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i =0;i<=n-2;i++){
        int mini=i;
        for(int j =i;j<=n-1;j++){
            if(arr[j]<arr[i]){
                mini=j;
            }
        }
        //swap
        // int temp=arr[i];
        // arr[i]=arr[mini];
        // arr[mini]=temp;
        swap(arr[mini],arr[i]);
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    selectionSort(arr,n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
