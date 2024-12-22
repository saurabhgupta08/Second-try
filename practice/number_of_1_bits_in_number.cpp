#include <bits/stdc++.h>
using namespace std;

int numberBits(int n){
    
    int count=0;
    while(n){
        if(n&1) count++;
        n=n>>1;
    }
    return count;
}

int main(){
    cout<<" yoo"<<endl;
    cout<<numberBits(9)<<endl;
    return 0;
}