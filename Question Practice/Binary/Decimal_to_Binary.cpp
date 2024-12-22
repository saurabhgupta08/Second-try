#include <bits/stdc++.h>
using namespace std;


int main(){
    int num;
    cout<<"Enter Number"<<endl;
    cin>>num;

    int binary=0;
    int pow=1;  //10^0=1

    while(num!=0){
        int BinDi=num%2;
        binary=BinDi*pow +binary;

        pow=pow*10;
        num=num/2;
    }

    cout<<"Binary: "<<binary<<endl;
    return 0;
}