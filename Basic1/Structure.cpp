#include <iostream>
using namespace std;


// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main(){
    struct
    {
        int rollNo;
        string name;
    }info;

    info.rollNo= 24;
    info.name="Saurabh";

    cout<<info.name<<endl;

    struct {
    int myNum;
    string myString;
    } myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas
    

    struct {
    string brand;
    string model;
    int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";


    // Create a car structure and store it in myCar1;
    car myCar3;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Create another car structure and store it in myCar2;
    car myCar4;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;
    
    // Print the structure members
    cout << myCar3.brand << " " << myCar3.model << " " << myCar1.year << "\n";
    cout << myCar4.brand << " " << myCar4.model << " " << myCar2.year << "\n";

    string food = "Pizza";

    cout << &food; // Outputs 0x6dfed4
    
    return 0;

}