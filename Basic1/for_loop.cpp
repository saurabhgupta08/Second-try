#include <iostream>
using namespace std;

int main(){
    // 1
    // 12
    // 123
    // 1234
    // 12345

    int row;
    cout<<"Enetr number of row: ";
    cin>>row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
    

}