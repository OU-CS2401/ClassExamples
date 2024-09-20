/**
 * This file stores the implementations for the Numbers class member functions.
 */

#include "numbers.h"
#include <iostream>

Numbers::Numbers(){
    used = 0;
    size = 10;

    // allocate the array
    data = new int[size];
}

Numbers::~Numbers(){
    delete [] data;
}

Numbers::Numbers(const Numbers& other){
    size = other.size;
    used = other.used;

    data = new int[size];
    // copy all data from other to this
    // fill this in with loop or copy function
}

void Numbers::operator = (const Numbers& other){
    // check for self assignment
    if(this == &other){
        return;
    }
    
    // destroy old data
    // fill this in with deconstructor code

    // make a copy
    // fill this in with copy constructor code
}

void Numbers::add(int a){
    // verify that used is valid before trying to add something at that position
    if(used >= size){
        resize();
    }
    data[used] = a;
    ++used;
}

void Numbers::resize(){
    // allocate a new array
    int *tmp = new int[size + 5];

    // copy existing data into new array
    for(unsigned i = 0; i < used; i++){
        tmp[i] = data[i];
    }
    /*
    #include <algorithm>

    //copy(begin, end, destination);
    copy(data, data + used, tmp);
    */

    // deallocate the old array
    delete [] data;

    // move "data" pointer
    data = tmp;

    // update "size"
    size += 5;
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

void Numbers::display() const{
    // output all used elements one item per line
    for(int i = 0; i < used; i++){
        std::cout << data[i] << std::endl;
    }
}

void Numbers::insertion_sort(){
    for(int i = 1; i < used; i++){
        // save number being inserted
        int next = data[i];

        // move all larger elements up one position
        int j = i;
        while(j > 0 && next < data[j - 1]){
            // move this element
            data[j] = data[j - 1];
            j--;
        }
        // insert next
        data[j] = next;
    }
}

void Numbers::bubble_sort(){
    int i, upper_bound = used - 1;
    int tmp;
    bool done = false;

    while(!done){
        // start by assuming I am done
        done = true;

        // compare adjacent elements
        for(i = 0; i < upper_bound; i++){
            if(data[i] > data[i + 1]){
                tmp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = tmp;

                done = false;
            }
        }
        upper_bound--;
    }
}

void Numbers::selection_sort(){
    int i, j, smallest;
    // variable for swapping - type the array is storing
    int tmp;

    // find position to fill
    for(i = 0; i < used - 1; i++){
        smallest = i;
        for(j = i + 1; j < used; j++){
            if(data[j].get_name() < data[smallest]){
                smallest = j;
            }
        }

        tmp = data[i];
        data[i] = data[smallest];
        data[smallest] = tmp;
    }
    
}