#include "bnode.h"
#include <iostream>

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


int size(BNODE* root){
    // int count = 0;
    // base case
    if(root == nullptr){
        return 0;
    }
    else{
        // count += size(root -> left());
        // count += size(root -> right());
        return 1 + size(root -> right()) + size(root -> left());
    }
}


// tree traversals 

// in-order: left, root, right
void print_in_order(BNODE* root){
    // base case
    if(root == nullptr){
        return;
    }
    else{
        print_in_order(root -> left());
        cout << root -> data() << endl;
        print_in_order(root -> right());
    }
}

// pre-order: root, left, right
void print_pre_order(BNODE* root){
    // base case
    if(root == nullptr){
        return;
    }
    else{
        cout << root -> data() << endl;
        print_pre_order(root -> left());
        print_pre_order(root -> right());
    }
}

// post-order: left, right, root
void print_post_order(BNODE* root){
    // base case
    if(root == nullptr){
        return;
    }
    else{
        print_post_order(root -> left());
        print_post_order(root -> right());
        cout << root -> data() << endl;
    }
}