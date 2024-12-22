#include <bits/stdc++.h>
using namespace std;

vector<int> duplicates(vector<long long> arr) {
        vector<int> v;
        map<long long,int> mapp;
        
        for(int i=0;i<arr.size();i++){
            mapp[arr[i]]++;
        }
        
        for(auto item : mapp){
            if(item.second>1){
                v.push_back(item.first);
            }
        }
        if(v.empty())v.push_back(-1);
        return v;
    }


int main(){

    vector<long long> arr={1,2,2,4,4};

    vector<int> ans=duplicates(arr);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}