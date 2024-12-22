#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n) {
        int Flarge=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>Flarge){
                Flarge=arr[i];
            }
        }
        
        int Slarge=-1;
        for(int i=0;i<n;i++){
            if(arr[i]>Slarge && arr[i]<Flarge){
                Slarge=arr[i];
            }
        }
        
        return Slarge;
    }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<print2largest(arr,n)<<endl;    

    return 0;
}   