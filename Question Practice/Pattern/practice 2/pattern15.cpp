#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        // space
        for(int j=1;j<n-i+1;j++){
            cout<<"  ";
        }
        // tri 1
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        // tri 2
        for(int j=i-1;j>0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}