#include <bits/stdc++.h>
using namespace std;

string reverse(string s){
    stack<char> ch;
    int n=0;
    string ans="";
    while(n<s.size()){
        ch.push(s[n]);
        n++;
    }
    while(!ch.empty()){
        char el= ch.top();
        ans=ans+el;
        ch.pop();
    }

    return ans;
}

int main(){
    string name="Saurabh";
    cout<<reverse(name)<<endl;
    return 0;
}