#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter  number"<<endl;
    cin>>n;

    int originalN=n;
    int sum=0;

    while (n>0)
    {
        int digit=n%10;
        sum += digit*digit*digit;
        n/=10; 
    }

    cout<<sum<<endl;
    
    if(originalN==sum){
        cout<<"It is Armstrong number"<<endl;
    }
    else{
        cout<<"It is not "<<endl;
    }

}