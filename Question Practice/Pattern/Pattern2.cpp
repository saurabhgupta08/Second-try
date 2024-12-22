#include<iostream>
using namespace std;

// n=5
// * * * * * 
// *       *
// *       *
// *       *
// * * * * *


int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    
    for(int i = 1 ; i<=n;i++){
        if(i==1 || i==n){
            for(int j =1 ;j<=n;j++){
                cout<<" * ";
            }
            cout<<endl;
        }
        else{
            for(int j =1;j<=n;j++){
                if(j==1||j==n){
                    cout<<" * ";
                }
                else{
                    cout<<"   ";
                }
            }
            cout<<endl;
        }
    }
    

}