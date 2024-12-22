#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> v(m,vector<int>(n));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[j][i] = matrix[i][j];
            }
        }
        return v;
    }

int main(){
    vector<vector<int>> v(2,vector<int>(3));
    int i=1;
    for (int row = 0; row < 2; ++row) {
        for (int col = 0; col < 3; ++col) {
            v[row][col] = i++; 
        }
    }
    for (int row = 0; row < 2; ++row) {
        for (int col = 0; col < 3; ++col) {
            cout<<v[row][col]<<" "; 
        }
        cout<<endl;
    }

    cout<<endl;
    vector<vector<int>> v1=transpose(v);

    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 2; ++col) {
            cout<<v1[row][col]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}