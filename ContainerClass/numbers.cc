#include "numbers.h"
#include <iostream>

using namespace std;

void Numbers::see_all() const{
    // make sure there is data to display first
    if(used != 0){
        for(unsigned i = 0; i < used - 1; i++){
            cout << data[i] << ", ";
        }
        cout << data[used - 1] << endl;
    }
    else{
        cout << "Nothing to display\n";
    }
}

void Numbers::add_item(double i){
    // make sure there is space to add something to the array
    if(used < 100){
        data[used] = i;
        used++;
    }
    else{
        cout << "Array is full, data NOT added.\n";
    }
}

double Numbers::sum_all() const{
    /*
        NOTE: As mentioned in class, this could overflow the total variable if the numbers are very large.

        Max value for a double is defined as:
        std::numeric_limits<double>::max()

        You must #include <limits> to access that function.
    */
    double total = 0;
    for(unsigned i = 0; i < used; i++){
        total += data[i];
    }
    
    return total;
}