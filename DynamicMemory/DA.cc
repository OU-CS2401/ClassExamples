#include "DA.h"
#include <iostream>
using namespace std;

DA::DA(){
    used = 0;
    size = 5;
    data = new int[size];
}

DA::~DA(){
    delete [] data;
}

DA::DA(const DA& other){
    used = other.used;
    size = other.size;

    data = new int[size];
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

void DA::operator = (const DA& other){
    // check for self assignment
    if(this == &other){
        return;
    }
    
    // Deallocate the existing array (deconstructor)
    delete [] data;

    // Make a copy (copy constructor)
    used = other.used;
    size = other.size;

    data = new int[size];
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

void DA::add_item(int item){
    if(used == size){
        resize();
    }

    data[used] = item;
    used++;

}

void DA::resize(){
    int* tmp;
    tmp = new int[size + 5];

    for(int i = 0; i < size; i++){
        tmp[i] = data[i];
    }
    // #include <algorithm>
    // copy(start, stop, destination);
    //copy(data, data + used, tmp);

    delete [] data;
    data = tmp;

    size += 5;

    // DON'T DELETE TMP!!
    //delete [] tmp;
    tmp = nullptr;
}

void DA::see_all(std::ostream& outs) const{
    for(size_t i = 0; i < used; i++){
        outs << data[i] << endl;
    }
}