#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s){
    int n=s.size();
    int low=0,high=n-1;
    
    
    
    while(low<high){
        while(isalnum(s[low]) == false) low++;

        while(isalnum(s[high]) == false) high--;
        
        if(low < high) {

            if(isalnum(s[low]) && isalnum(s[high])) {

                char ch1 = toupper(s[low]);

                char ch2 = toupper(s[high]);

                if(ch1 != ch2) return false;

            }

        }
        low++;
        high--;
    }
    return true;
}

int main(){

    return 0;
}