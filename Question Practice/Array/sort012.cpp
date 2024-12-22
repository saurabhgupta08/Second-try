#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n)
    {
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(a[mid]==0){
                swap(a[mid],a[low]);
                mid++;
                low++;
            }
            else if(a[mid]==1){
                mid++;
            }
            else{
                swap(a[mid],a[high]);
                high--;
            }
        }
    }


int main(){
    int arr[11]={0,2,1,0,1,2,0,1,0,0,0};

    sort012(arr,11);

    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}