#include <bits/stdc++.h>
using namespace std;

void find(int arr[],int n){
    int larg=INT_MIN;
    int secLarg=-1;
    int small=INT_MAX;
    int secSmall=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>larg){
            secLarg=larg;
            larg=arr[i];
        }
        if(arr[i]<small){
            secSmall=small;
            small=arr[i];
        }
    }
    // for(int i=0;i<n;i++){
    //     if(arr[i]!=small && arr[i]<secSmall){
            
    //     }
    // }

    cout<<"second largeest "<<secLarg<<endl;
    cout<<"second smallest "<<secSmall<<endl;

}

int main(){
    int arr[]={1,2,5,6,8};
    find(arr,5);
    return 0;
}