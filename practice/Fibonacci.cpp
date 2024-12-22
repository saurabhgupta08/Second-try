#include <bits/stdc++.h>
using namespace std;

void fibonacci(int n){
    if(n==1) cout<<"0 "<<endl;
    else if(n==2)cout<<"0 1 "<<endl;
    else{
        int a=0,b=1;
        cout<<"0 1 ";
        for(int i=3;i<=n;i++){
            int nextNumber=a+b;
            cout<<nextNumber<<" ";
            a=b;
            b=nextNumber;
        }
    }
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}