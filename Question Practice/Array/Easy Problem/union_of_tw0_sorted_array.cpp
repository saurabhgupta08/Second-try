#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>uni;
        int i=0;
        int j=0;
        while(i<n && j<m){
            if(arr1[i]==arr2[j]){
                if(uni.size()==0 || arr1[i]!=uni[uni.size()-1]){
                    uni.push_back(arr1[i]);
                    
                }
                i++;
                j++;
            }
            else if(arr1[i]<arr2[j] ){
                if(uni.size()==0 || arr1[i]!=uni[uni.size()-1]) {
                    uni.push_back(arr1[i]);
                    
                }
                i++;
            }
            else{
                if(uni.size()==0 || arr2[j]!=uni[uni.size()-1]) {
                    uni.push_back(arr2[j]);
                    
                }
                j++;
            }
        }
        
        while(i<n){
            if(uni.size()==0 || arr1[i]!=uni[uni.size()-1]) {
                uni.push_back(arr1[i]);
                
            }
            i++;
        }
        
        while(j<m){
            if(uni.size()==0 || arr2[j]!=uni[uni.size()-1]) {
                uni.push_back(arr2[j]);
                
            }
            j++;
        }
        return uni;
    }

int main(){

    return 0;
}