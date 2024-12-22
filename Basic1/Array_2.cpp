#include <iostream>
using namespace std;

int main(){
    string letters[2][4] = {
    { "A", "B", "C", "D" },
    { "E", "F", "G", "H" }
    };

    cout<<letters[1][1]<<endl;
    letters[1][1]="y";
    cout<<letters[1][1]<<endl;

}