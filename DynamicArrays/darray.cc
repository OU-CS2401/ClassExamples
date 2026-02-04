#include "darray.h"
#include <iostream>

using namespace std;

Darray::Darray(){
    used = 0;
    size = 5;
    // allocate an initial array
    // make sure to do this after initializing size - why?
    data = new double[size];
}

void Darray::see_all() const{
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

void Darray::add_item(double i){
    // if the array is full, resize it
    if(used == size){
        resize();
    }
    // at this point, there must be space for the new item, so just add it to the end of the used portion
    data[used] = i;
    used++;

}

double Darray::sum_all() const{
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

void Darray::resize(){
    // make tmp pointer with new larger array
    double *tmp = new double[size + 5];

    // copy all elements from the old array into the new one
    for(int i = 0; i < used; i++){
        tmp[i] = data[i];
    }

    // deallocate the old array
    delete [] data;
    // point the class's member pointer to the new array
    data = tmp;
    // increase size variable by the amount added
    size += 5;

    // don't do this - why?
    delete [] tmp;
}