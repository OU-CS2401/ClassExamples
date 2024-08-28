// library to use cin/cout
#include <iostream>
// library to use strings
#include <string>
// library to use output formatting methods
#include <iomanip>

// Invoke the standard namespace
using namespace std;

// Create a structure
struct Bday{
    unsigned day;
    string month;
    unsigned year;
};

// Begin main program
int main(){
    // Basic data types
    int x;
    float y;
    double z;
    unsigned u;

    char c;

    bool b;

    // Set up an array with 5 elements
    int array[5];

    // Create an instance of a structure
    Bday mine;


    // Standard I/O
    cout << "Enter an integer: ";
    cin >> x;

    // Output formatting
    cout << "x = " << x << endl;
    cout << setw(10) << "x = " << x << endl;
    cout << setw(10) << setfill('-') << "x = " << x << endl;

    // Adding meaningful data to a structure
    cout << "Enter birth month: ";
    cin >> mine.month;
    cout << "Enter birth day (as integer): ";
    cin >> mine.day;
    cout << "Enter birth year (as integer): ";
    cin >> mine.year;

    // if statement
    if(mine.year > 2024){
        cout << "That year hasn't happened yet!" << endl;
    }

    // Compound conditions
    if(mine.month == "January" && mine.day > 31){
        cout << "There aren't that many days in January.\n";
    }
    else if(mine.month == "February" && mine.day > 28){
        // Assumes it's not a leap year for simplicity
        cout << "There aren't that many days in February.\n";
    }
    else {
        cout << "We don't car about that month.\n";
    }

    // switch statement
    switch(b){
        case true:
            cout << "b is true" << endl;
            break;
        case false:
            cout << "b is false" << endl;
            break;
    };

    // while loop
    x = 0;
    while (x < 5){
        array[x] = x * 2;
        x++;
    }

    // same loop as above as a for loop
    for(x = 0; x < 5; x++){
        array[x] = x * 2;
    }

    // do-while loop
    z = 0.5;
    do{
        cout << z << endl;
        z += 10;
    }while (z < 100);

}