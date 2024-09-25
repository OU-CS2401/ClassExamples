#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void add_to_end(node*& head, int d);
void remove(node*& head, int target);

int main(){
    node* head;

    // mark the list as empty
    head = nullptr;

    // // allocate a first node
    // head = new node;
    // // set next pointer of first node
    // (*head).next = nullptr;
    // // set data of first node
    // (*head).data = 1;

    head = new node;
    head -> next = nullptr;
    head -> data = 1;


    // // allocate a first node
    // (*head).next = new node;
    // // set next pointer of first node
    // (*(*head).next).next = nullptr;
    // // set data of first node
    // (*(*head.next)).data = 2;

    head -> next = new node;
    head -> next -> next = nullptr;
    head -> next -> data = 2;


    // assume the list is now long
    node* cursor = head;
    while(cursor != nullptr){
        cout << cursor -> data << endl;
        cursor = cursor -> next;
    }

    for(node* cursor = head; cursor != nullptr; cursor = cursor -> next){
        cout << cursor -> data << endl;
    }
}

void add_to_end(node*& head, int d){
    if(head == nullptr){
        head = new node;
        head -> next = nullptr;
        head -> data = d;
        return;
    }
    node* cursor;
    for(cursor = head; cursor -> next != nullptr; cursor = cursor -> next){
        
    }
    cursor -> next = new node;
    cursor -> next -> next = nullptr;
    cursor -> next -> data = d;

    // node* tmp = new node;
    // cursor -> next = tmp;
    // tmp -> next = nullptr;
    // tmp -> data = d;
}

void remove(node*& head, int target){
    node* prev, *cursor;

    // find the node to remove and the previous node
    for(cursor = head; cursor -> next -> data; cursor = cursor -> next){

    }

    prev = cursor;
    cursor = cursor -> next;
    prev -> next = prev -> next -> next;
    delete cursor;
}