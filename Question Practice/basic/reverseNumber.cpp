#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    int reverse=0;

    while (n>0)
    {
        int ld=n%10;
        reverse=reverse*10 + ld;
        n = n/10;
    }

    cout<<reverse<<endl;
    

}