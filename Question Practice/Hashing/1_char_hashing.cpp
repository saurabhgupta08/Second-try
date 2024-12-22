#include <bits/stdc++.h>
using namespace std;

//Lowercase

int main(){
    string s;
    cin>>s;

    //Pre-Compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }   

    int q ;
    cin>>q;
    while (q--)
    {
        char ch;
        cin>>ch;
        cout<<"-->>"<<hash[ch-'a']<<endl;
    }
    
}