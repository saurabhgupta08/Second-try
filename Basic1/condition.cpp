#include <iostream>
using namespace std;

int main(){
    if (20 > 18) {
    cout << "20 is greater than 18"<<endl;
    }

    int time = 22;
    if (time < 10) {
    cout << "Good morning.";
    } else if (time < 20) {
    cout << "Good day.";
    } else {
    cout << "Good evening."<<endl;
    }

    // ternary operator
    int time2=22;
    string result=(time2<12)?"Good morning":"Good Day";
    cout<<result<<endl;

    cout<<(0>0);
}