#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
        int n=s.length();
        string str=s;
        for(int i=1;i<n;i++){
            if(str[i-1]==str[i]){
                str.erase(str.begin() + i);
            }
        }
        return str;
    }

int main(){

    return 0;
}