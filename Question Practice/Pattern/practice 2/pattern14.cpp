#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    char c='A';
    for(int i=1;i<=n;i++){
        // space
        for(int j=1;j<i;j++){
            cout<<"  ";
        }
        //*
        for(int k=1;k<=n-i+1;k++){
            cout<<c<<" ";
        }
        c++;
        cout<<endl;
    }
    return 0;
}