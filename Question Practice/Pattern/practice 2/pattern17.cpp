#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        // space
        for(int j=n-i;j>0;j--){
            cout<<"  ";
        }

        // star
        cout<<"* ";

        // space
        if(i!=1){
            // space
            for(int j=2;j<2*i-1;j++){
                cout<<"  ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        cout<<"* ";

        for(int j=1;j<=n-(2*i-1);j++){
            cout<<"  ";
        }
        if(i!=n-1)cout<<"* ";

        cout<<endl;
    }
    return 0;
}