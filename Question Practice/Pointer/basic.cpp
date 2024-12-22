#include <bits/stdc++.h>
using namespace std;


int main(){
    // int x= 10;
    // int* ptr=&x;
    // cout<<*ptr<<endl;

    int arr[]={10,20,30,40};
    // cout<<*arr<<endl;
    int* ptr=arr;
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    cout<<endl;
    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<endl;
        
    }
    return 0;
}