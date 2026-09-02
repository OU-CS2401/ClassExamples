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