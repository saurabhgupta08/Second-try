#include <bits/stdc++.h>
using namespace std;

int subProdSum(int n){
    int product=1,sum=0;
    while(n){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    return product-sum;
}

int main(){
    cout<<subProdSum(25)<<endl;
    return 0;
}