#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
        // map<int ,int > mapp;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     mapp[nums[i]]++;
        // }
        // int k=mapp.size();
        // nums.clear();
        
        // for(auto itt : mapp){
        //     nums.push_back(itt.first);
        // }
        // return k;


        //two pointer approch
        int j=0;
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[j]){
                nums[j+1]=nums[i];
                j++;
            }
        }
        return j+1;
        
    }

int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr.push_back(a);
    }

    cout<<removeDuplicates(arr)<<endl;  

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }  

    
    return 0;
}