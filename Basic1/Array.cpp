#include <iostream>
using namespace std;

int main(){
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
    }

    // for-each loop
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
    }
   
    cout << sizeof(myNumbers)<<endl;
}