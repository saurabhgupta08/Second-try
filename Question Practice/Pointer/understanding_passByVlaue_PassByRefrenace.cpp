#include <bits/stdc++.h>
using namespace std;

void incrementV(int a){
    a++;
}
void incrementR(int* a){
    (*a)++;
}

int main(){
    int a=2;
    
    incrementV(a);
    cout<<a<<endl;
    incrementR(&a);
    cout<<a<<endl;

    int *jj=0;
    cout<<jj<<endl;
    return 0;
}