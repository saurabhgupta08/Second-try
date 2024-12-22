#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    bool isprime=true;
    cout<<"Enter a number "<<endl;
    cin>>x;

    if(x==1){
            cout<<"1 is not prime number"<<endl;
            isprime=false;
        }
    else{
        for (int i = 2; i < x; i++)
        {
            if (x%i==0)
            {
                cout<<x<<" is not prime number "<<endl;
                isprime=false;
                break;
            }
        }
        }
    if(isprime){
        cout<<x<<" is prime"<<endl;
        }
}
