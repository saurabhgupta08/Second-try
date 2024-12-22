#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    bool s=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            s=false;
            break;
        }
    }   
    if(s)cout<<n<<" is prime number"<<endl;
    else cout<<n<<" is not prime number"<<endl;
    return 0;
}