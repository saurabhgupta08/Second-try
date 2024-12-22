#include <bits/stdc++.h>
using namespace std;

int BinToDeci(int binary){
    int deci=0;
    int towM=1;

    int rem;
    while(binary != 0){
        rem=binary%10;

        if(rem==1) deci=deci+towM;

        binary=binary/10;
        towM=towM*2;

    }
    return deci;
}

int main(){
    int binary;
    cout<<"Enter binary number :"<<endl;
    cin>>binary;
    cout<<"decimal: "<<BinToDeci(binary)<<endl;
    return 0;
}