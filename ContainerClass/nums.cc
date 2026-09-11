#include "nums.h"

using namespace std;

void Numbers::add_item(int item){
    if(used < SIZE){
        data[used] = item;
        used++;
    }
    else{
        cout << "Number not added; array full\n";
    }
}

void Numbers::see_all(std::ostream& outs) const{
    for(size_t i = 0; i < used; i++){
        outs << data[i] << endl;
    }
}

double Numbers::average() const{
    double total = 0.0;
    for(int i = 0; i < used; i++){
        total += data[i];
    }

    return total / used;
}

void Numbers::remove(int index){
    data[index] = data[used - 1];
    used--;
}

void Numbers::remove_all(int target){
    for(int i = 0; i < used; i++){
        if(data[i] == target){
            data[i] = data[used - 1];
            used--;
            i--;
        }
    }
}