#include <bits/stdc++.h>
using namespace std;

void countFre(vector<int>& arr ,int n,int m){
    vector<int>hash(m+1,0);
    for(int i = 0;i<n;i++){
        hash[arr[i]]++;
        
    }
    
    for(int j =0;j<=m;j++){
        cout<<hash[j]<<endl;
    }
    
}

int main(){
    vector<int> arr={1,2,3,3,4};

    countFre(arr,5,4);
    
    return 0;

}