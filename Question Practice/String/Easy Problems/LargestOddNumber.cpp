#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
    int nums= stoi(num);
    if(nums%2!=0)return num;
    int largeOdd=-1;
        
    while(nums!=0){
        int digit=nums%10;
        nums=nums/10;
        if(nums%2!=0){
            if(largeOdd<nums) largeOdd=nums;
        }
        else if(digit%2!=0){
            if(largeOdd<digit) largeOdd=digit;
        }
    }
        
    if(largeOdd==-1) return "";
    string dig =to_string(largeOdd);
    return dig;
}

int main(){

    return 0;
}