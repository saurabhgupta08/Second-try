#include <bits/stdc++.h>
using namespace std;

int findPages(vector<int>& arr, int n, int m) {
    if(m>n) return -1;
    sort(arr.begin(),arr.end());

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int pair =n-m+1;
    int ans=0;
    for(int i=0;i<pair;i++){
        ans=ans+arr[i];
        cout<<ans<<endl;
    }
    return ans;
    
}

int main(){
    vector<int> v{25,46,28,49,24};
    cout<<findPages(v,5,4)<<endl;
    return 0;
}