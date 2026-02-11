#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

/**
 * @brief create a new node at the end of the list with the data passed in
 * 
 * @param head - pointer to the head of the list
 * @param d - data you want to add to the list
 */
void add_to_end(Node*& head, int d);

void remove(Node*& head, int target);

int main(){
    // Node* head;
    // make list empty
    // head = nullptr;

    // head = new Node;
    // (*head).data = 5;
    // (*head).next = nullptr;

    // (*head).next = new Node;
    // (*(*head).next).data = 7;

    Node* head;
    head = nullptr;

    head = new Node;
    head -> data = 5;
    head -> next = nullptr;

    head -> next = new Node;
    head -> next -> data = 7;
    head -> next -> next = nullptr;

    Node* cursor = head;
    while(cursor != nullptr){
        cout << (*cursor).data << endl;
        //cout << cursor -> data << endl;
        cursor = cursor -> next;
    }

    cout << "(*head).data: " << (*head).data << endl;
    // NOTE: without ( ), syntax error because . has greater precedence than *
    cout << "*head.data: " << *head.data << endl;
}


void add_to_end(Node*& head, int d){
    Node* cursor = head;
    while(cursor -> next != nullptr){
        cursor = cursor -> next;
    }

    cursor -> next = new Node;
    cursor -> next -> data = d;
    cursor -> next -> next = nullptr;
}