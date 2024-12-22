#include <bits/stdc++.h>
using namespace std;

vector<int> mergArray(int arr1[],int n,int arr2[],int m){
    int f=0;
    int s=0;
    vector<int> v;
    while(f<n && s<m){
        if(arr1[f]<arr2[s]){
            v.push_back(arr1[f]);
            f++;
        }
        else if(arr1[f]==arr2[s]){  //this for no repitation 
            v.push_back(arr1[f]);
            f++;
            s++;
        }
        else{
            v.push_back(arr2[s]);
            s++;
        }
    }
    while (f<n)
    {
        v.push_back(arr1[f]);
            f++;
    }
    while (s<m)
    {
        v.push_back(arr2[s]);
            s++;
    }
    return v;
}

int main(){

    int arr1[]={1,3,5,7,9,11,12};
    int arr2[]={2,4,6,8,9,10};
    vector<int> v=mergArray(arr1,7,arr2,6);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}