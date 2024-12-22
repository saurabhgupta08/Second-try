#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s){
        int low=0;
        int high=s.size()-1;
        while(low<high){
            if(!isalnum(s[low])){
                low++; 
                continue;
                }
            if(!isalnum(s[high])){
                high--;
                continue;
                }
            if(tolower(s[low])!=tolower(s[high]))return false;

            low++;
            high--;
                
        }
        return true;
}

int main(){

    string s="N2 i&nJA?a& jnI2n";
    
    
    cout<<checkPalindrome(s)<<endl;
    cout<<s<<endl;
    return 0;
}