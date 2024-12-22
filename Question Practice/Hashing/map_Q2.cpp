#include <bits/stdc++.h>
using namespace std;



int main(){
    string message;
    cin>>message;

    // pre-compute
    map<char,int> mpp;
    for(int i =0;i<message.size();i++){
        mpp[message[i]]++;
    }

    // itrate in map
    for(auto it : mpp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        char letter;
        cin>>letter;
        cout<<mpp[letter]<<endl;
    }
    return 0;

}