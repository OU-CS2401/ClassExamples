#include "Darray.h"
using namespace std;

Darray::Darray(){
    size = 5;
    used = 0;
    data = new double[size];
}

Darray::~Darray(){
    delete []data;
}

Darray::Darray(const Darray& other){
    used = other.used;
    size = other.size;

    data = new double[size];
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

void Darray::operator = (const Darray& other){
    // check if I tried to assign myself to myself
    // if I don't, I will blow away my own data
    if(this == &other){
        return;
    }

    // deallocate the old data array
    delete [] data;
    
    // make a copy of other just like in the copy constructor
    used = other.used;
    size = other.size;
    data = new double[size];
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

void Darray::add_item(double item){
    if(used == size){
        resize();
    }
    data[used] = item;
    used++;
}

void Darray::resize(){
    double* tmp;
    tmp = new double[size + 5];
    
    for(int i = 0; i < used; i++){
        tmp[i] = data[i];
    }

    // DO NOT DELETE TMP
    delete []data;
    data = tmp;
    size += 5;
}