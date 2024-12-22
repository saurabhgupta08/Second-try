#include <bits/stdc++.h>
using namespace std;

string reverse_sen(string s){
    stack<string> st;

    for(int i = 0 ;i<s.length();i++){
        string word="";

        while(s[i]!=' ' && i<s.size()){
            word=word + s[i];
            i++;
        }
        st.push(word);
    }
    string ans="";
    while(!st.empty()){
        string word=st.top();
        ans=ans+word+" ";
        st.pop();
    }
    return ans;
}

int main(){
    string sent= "My name is Saurabh?";
    cout<<reverse_sen(sent)<<endl;
    return 0;
}