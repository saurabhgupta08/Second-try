#include <bits/stdc++.h>
using namespace std;

int main (){
    map<int,int> mapp;
    // map<pair<int,int>,int> mapp;
    // map<int,pair<int,int>> mapp;

    //store unique key and sorted key



    mapp[1]=2;
    mapp.emplace(3,4);
    mapp.insert({2,5});

    for(auto it : mapp){
        cout<<it.first<<"-->"<<it.second<<endl;
    }

    cout<<mapp[2];


    auto iit= mapp.find(2);
    // cout<<*(iit).second;
    
}