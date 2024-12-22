#include <bits/stdc++.h>
using namespace std;


int main(){
    int *ptr= new int;
    *ptr=5;
    cout<<*ptr<<endl;

    float *ptr1=new float;
    *ptr1=5.5;
    cout<<*ptr1<<endl;

    int n;
    cout<<"Enter number of element "<<endl;
    cin>>n;
    int *p1= new int[n];

    for(int i =0;i<n;i++){
        p1[i]=i+1;
    }
    for(int i =0;i<n;i++){
        cout<<p1[i]<<" ";
    }
    cout<<endl;


    //delete the dynamic memory 
    delete ptr;
    delete ptr1;
    delete[] p1; //for delete array
    return 0;
}