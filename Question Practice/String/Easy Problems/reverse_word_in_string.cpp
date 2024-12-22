#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
     string temp=s;
     int low=0;
     int high=temp.size()-1;
     while(low<high){
        swap(temp[low],temp[high]);
        low++;
        high--;
     }
     string ans;

     int i=0;
     while(i<=temp.size()){
        string word;
        while(isalpha(temp[i])){
            word.push_back(temp[i]);
            i++;
        }
        if(!word.empty()){
            reverse(word.begin(),word.end());
            ans.append(word +" ");
        }
        
        i++;
     }
     while(!isalpha(ans.back())) ans.pop_back();
     
     return ans;
     }

int main(){
    string str="   my name is Saurabh   ";
    cout<<reverseWords(str);
    cout<<"\\";
    return 0;
}