#include <bits/stdc++.h>
using namespace std;

int fourthlargestNum(vector<int> & arr){
    if(arr.size()<4)return -1;
    int n=arr.size();
    sort(arr.begin(),arr.end());

    return arr[n-4];
}

int main(){
    vector<int> arr={4,3,8,9,5,7};
    cout<<"answer is : "<<fourthlargestNum(arr)<<endl;
    return 0;
}