#include "dll.h"

using namespace std;

void DLL_Cont::add_end(int item){
    if(head == nullptr){
        head = tail = new DNODE(item);
        return;
    }
    tail -> set_next(new DNODE(item, tail));
    tail = tail -> next();
}


void DLL_Cont::remove(int target){


}