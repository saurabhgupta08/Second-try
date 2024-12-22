#include <bits/stdc++.h>
using namespace std;

string Solve (int N) {
   int n=1,sum=0;
	while(n<N){
		if(N%n==0){
			sum=sum+n;
		}
		n++;
	}
    string res;
	if(sum==N){
		res="Yes";
	}
	else {
		res="No";
	} 
    return res;
}

int main(){
    cout<<Solve(28)<<endl;
    return 0;
}