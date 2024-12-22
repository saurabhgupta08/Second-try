#include <bits/stdc++.h>
using namespace std;

//division method (hashing)
//this method is used when arry is limited 
// like Arr{58 ,23 ,41 ,69 ,77} and we store the frequency in array whith limited array of 10

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //pre-compute
    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]%10]++;
    }

    int q;
    cin>>q;
    while (q--)
    {
        int num;
        cin>>num;
        cout<<hash[num%10]<<endl;
    }
    

}