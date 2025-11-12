// Print out a singly linked list backwards
#include <iostream>
#include <stack>
using namespace std;

struct node{
    int data;
    node* next;
};

/* This is one iterative solution */
void print_list_iterative(node* head){
    node* cursor = head;
    stack<node*> s;

    while(cursor != NULL){
        s.push(cursor);
        cursor = cursor -> next;
    }

    while(!s.empty()){
        cout << s.top() -> data << endl;
        s.pop();
    }
}

/* This is a recursive solution */
void print_list_recursive(node* head){
    // Base Case to stop the function from infinitely recursing
    if(head == NULL){
        return;
    }
    else{
        // This is the variant expression
        // Whatever changes about each call so that each call steps towards the base case
        print_list_recursive(head -> next);
        cout << head -> data << endl;
    }
}     