/**
 * This file stores the implementations for the Numbers class member functions.
 */

#include "numbers.h"
#include <iostream>

void Numbers::selection_sort(){
    int i, j, smallest;
    // variable for swapping - type the array is storing
    int tmp;

    // find position to fill
    for(i = 0; i < used - 1; i++){
        smallest = i;
        for(j = i + 1; j < used; j++){
            if(data[j] < data[smallest]){
                smallest = j;
            }
        }

        tmp = data[i];
        data[i] = data[smallest];
        data[smallest] = tmp;
    }
    
}

void Numbers::remove(int target){
    // copy last used item over the one to be removed
    for(int i = 0; i < used; i++){
        if(data[i] == target){
            data[i] = data[used - 1];
            used--;
            i--;
        }
    }
}

bool Numbers::search(int target) const{
    for(int i = 0; i < used; i++){
        if(data[i] == target){
            return true;
        }
    }
    // make sure to return false if the item is not found
    return false;
}

void Numbers::add(int a){
    // verify that used is valid before trying to add something at that position
    if(used < SIZE && used >= 0){
        data[used] = a;
        ++used;
    }
}

Numbers::Numbers(){
    used = 0;
}

void Numbers::display() const{
    // output all used elements one item per line
    for(int i = 0; i < used; i++){
        std::cout << data[i] << std::endl;
    }
}