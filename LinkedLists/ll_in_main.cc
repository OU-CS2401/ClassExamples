/**
 * @brief This file demonstrates using a struct node and building a linked list in the main
 * 
 */
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

void add_to_end(Node*& head, int item);
void ll_remove(Node*& head, int target);

int main(){
    Node* head;
    // start the list off empty
    head = nullptr;
    // allocate a first node
    head = new Node;
    // set the data in the first node
    (*head).data = 1;

    // Need to mark the end of the list using nullptr (address 0)
    (*head).next = nullptr;

    // How to add to the list? - Need to hook the new node
    // to the next pointer of the previous node
    (*head).next = new Node;
    (*(*head).next).data = 2; // stacking these like this will get old
    (*(*head).next).next = nullptr;

    // // Use another pointer
    Node* ptr;
    ptr = head; // If I do this, ptr and head point the same place
    // move ptr to the second node
    ptr = (*ptr).next;

    // make ptr's next a new node
    (*ptr).next = new Node;

    // move ptr to the new node I just created 
    ptr = (*ptr).next;
    (*ptr).data = 3;
    (*ptr).next = nullptr;

    // Look through a whole linked list
    Node* cursor;
    cursor = head;

    while(cursor != nullptr){
        cout << (*cursor).data << endl;
        cursor = (*cursor).next;
    }

    // (*ptr).something gets annoying to type
    // using -> is equivalent to the loop above
    cout << "Outputting list again using ->\n";
    cursor = head;

    while(cursor != nullptr){
        cout << cursor -> data << endl;
        cursor = cursor -> next;
    }

    // use a function to add to the list
    for(int i = 4; i < 10; i++){
        add_to_end(head, i);
    }
    cout << "Outputting updated list\n";
    cursor = head;

    while(cursor != nullptr){
        cout << cursor -> data << endl;
        cursor = cursor -> next;
    }

    // ll_remove elements from the list testing all edge cases
    // ll_remove first node
    ll_remove(head, 1);
    cout << "After removing first node: ";
    for(cursor = head; cursor != nullptr; cursor = cursor -> next) cout << cursor -> data << " ";
    cout << endl;
    // ll_remove last node
    ll_remove(head, 9);
    cout << "After removing last node: ";
    for(cursor = head; cursor != nullptr; cursor = cursor -> next) cout << cursor -> data << " ";
    cout << endl;
    // ll_remove a middle node
    ll_remove(head, 5);
    cout << "After removing middle node: ";
    for(cursor = head; cursor != nullptr; cursor = cursor -> next) cout << cursor -> data << " ";
    cout << endl;
    // try to ll_remove a node that isn't there
    ll_remove(head, 5);
    cout << "After trying to remove non-existant node: ";
    for(cursor = head; cursor != nullptr; cursor = cursor -> next) cout << cursor -> data << " ";
    cout << endl;
    // ll_remove all but 1 node
    ll_remove(head, 2);
    ll_remove(head, 3);
    ll_remove(head, 4);
    ll_remove(head, 6);
    ll_remove(head, 7);
    cout << "After removing all but one node: ";
    for(cursor = head; cursor != nullptr; cursor = cursor -> next) cout << cursor -> data << " ";
    cout << endl;
    // ll_remove last node (removal from single node list)
    ll_remove(head, 8);
    cout << "After removing from single-node list: ";
    for(cursor = head; cursor != nullptr; cursor = cursor -> next) cout << cursor -> data << " ";
    cout << endl;
    // ll_remove from an empty list
    ll_remove(head, 1);
    cout << "Didn't crash on empty list!\n";
}


// add something to a linked list
// head passed by reference in case it is empty
void add_to_end(Node*& head, int item){
    if(head == nullptr){
        head = new Node;
        head -> data = item;
        head -> next = nullptr;
    }
    else{
        Node* cursor;
        cursor = head;

        // don't want to run off the end of the list to nullptr
        // so look if cursor -> next is nullptr (this is the last node)
        while(cursor -> next != nullptr){
            cursor = cursor -> next;
        }

        cursor -> next = new Node;
        cursor -> next -> data = item;
        cursor -> next -> next = nullptr;
    }
}


void ll_remove(Node*& head, int target){
    Node *before, *ptr;
    before = ptr = head;

    if(head == nullptr){
        return;
    }

    while(ptr != nullptr && ptr -> data != target){
        if(ptr -> next != nullptr && ptr -> next -> data == target){
            before = ptr;
        }
        ptr = ptr -> next;
    }

    if(ptr == head){
        head = head -> next;
        delete ptr;
        return;
    }
    if(ptr == nullptr){
        return;
    }
    before -> next = before -> next -> next;
    delete ptr;
}