#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    if(n==1){
		cout<<"Is not prime";
	}
	else{
		for(int i=2;i*i<=n;i++){
			if(n%i==0){
				cout<<"Is not prime";
				
			}
		}
	}
	cout<<"Is prime ";
}