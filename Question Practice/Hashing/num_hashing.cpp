#include <bits/stdc++.h>
using namespace std;


int main(){
    //input Array
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    //pre-computing
    int hashh[100]={0};
    for(int i=0;i<n;i++){
        hashh[arr[i]] +=1;
    }

    //
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<"frequency of "<<number<<" is "<<hashh[number]<<endl;;
    }
    return 0;
    
}