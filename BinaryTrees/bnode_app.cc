#include "bnode.h"

using namespace std;

void clear(BNODE*& r);

int main(){
    BNODE* root = nullptr;

    // add some nodes

    clear(root);
}

void clear(BNODE*& r){
    // base case - tree is empty
    if(r == nullptr){
        return;
    }
    else{
        clear(r -> left());
        clear(r -> right());
        delete r;
        r = nullptr;
    }
}