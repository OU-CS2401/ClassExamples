#include <iostream>
using namespace std;

void add_to_end(node*& head, int item);

void remove(node* head, int target);

struct node{
    int data;
    node* next;
};

int main(){
    // pointer to the beginning of the list
    node* head = nullptr;
    add_to_end(head, 1);

    // head = new node;
    // (*head).next = nullptr;
    // (*head).data = 1;

    // (*head).next = new node;
    // (*(*head).next).next = nullptr;
    // (*(*head).next).data = 2;


    // head = new node;
    // head -> next = nullptr;
    // head -> data = 1;

    // head -> next = new node;
    // head -> next -> next = nullptr;
    // head -> next -> data = 2;

    node* tmp = head;
    while(tmp != nullptr){
        cout << tmp -> data;
        tmp = tmp -> next;
    }
}


void add_to_end(node*& head, int item){
    // special case for empty list
    if(head == nullptr){
        head = new node;
        head -> data = item;
        head -> next = nullptr;
        return;
    }
    
    node* cursor = head;
    while(cursor -> next != nullptr){
        cursor = cursor -> next;
    }

    // cursor is now pointing to the last node in the list
    cursor -> next = new node;
    cursor -> next -> data = item;

    cursor = cursor -> next;
    cursor -> next = nullptr;

}

void remove(node* head, int target){
    node *cursor, *prev;

    cursor = head;
    while(cursor != nullptr && cursor -> data != target){
        prev = cursor;
        cursor = cursor -> next;

        // if(cursor == nullptr){
        //     cout << "ITEM NOT FOUND\n";
        //     return;
        // }
    }

    if(cursor != nullptr){
        prev -> next = cursor -> next;
        delete cursor;
    }
}