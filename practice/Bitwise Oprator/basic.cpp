#include <bits/stdc++.h>
using namespace std;


int main(){
    int a=5;
    int b=6;
    cout<< "a&b "<<(a&b)<<endl;
    cout<< "a|b "<<(a|b)<<endl;
    cout<< "~a  "<<(~a)<<endl;
    cout<< "a^b "<<(a^b)<<endl;
    a=1,b=2;
    if(a-->0 && ++b>2)cout<<" yoo"<<endl;
    int x=1;
    int c=x++;
    int d=++x;
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}