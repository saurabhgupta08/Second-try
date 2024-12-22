#include<iostream>
using namespace std;

void printN(int i){
    if(i<1){
        return;
    }
    printN(i-1);
    cout<<i<<endl;
    return;
}

int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    printN(n);
    

}