#include<iostream>
using namespace std;

void printName_N(int n){

    if(n>0){
        cout<<"Saurabh"<<endl;
        n--;
        printName_N(n);
    }
    return;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    printName_N(n);

}