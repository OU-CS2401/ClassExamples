/**
 * This file stores the implementations for the Numbers class member functions.
 */

#include "numbers.h"
#include <iostream>

Numbers::Numbers(){
    used = 0;
    current_index = 0;
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

void Numbers::insert(int item){

}

void Numbers::attach(int item){
    
}

void Numbers::remove(){
    // move all items after the one at current_index up one space in the list
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