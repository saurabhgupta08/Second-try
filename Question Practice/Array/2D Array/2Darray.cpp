#include <bits/stdc++.h>
using namespace std;


int main(){
    //input
    
    // int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};

    int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};

    // int arr[3][4];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cin>>arr[i][j];
    //     }
    // }

    //output
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}