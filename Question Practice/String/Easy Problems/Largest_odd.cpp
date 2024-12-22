#include <bits/stdc++.h>
using namespace std;
string largestOddNumber(string num) {
        int numb=stoi(num);
        if(numb%2!=0)return num;
        else{
            string ans="-1";
            for(int i=0;i<num.size();i++){
                if(num[i]%2!=0){
                    if(num[i]>stoi(ans)){
                        ans=num[i];
                    }
                }
            }
            if(stoi(ans)>0) return ans;
        }
        
        return "";
    }

int main(){

    return 0;
}