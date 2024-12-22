#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int ,int> p={1,3};

    cout<<p.first<<"--"<<p.second<<endl;

    // nested pair
    pair<int,pair<int,int>> s={1,{5,8}};

    cout<<s.first<<"->"<<s.second.first<<","<<s.second.second<<endl;

    pair<int ,int> arr[]={{1,2},{3,4},{5,6}};

    cout<<arr[2].first<<endl;
}