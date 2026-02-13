#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

/**
 * @brief create a new node at the end of the list with the data passed in
 * 
 * @param head - pointer to the first node of a singly linked list
 * @param d - data you want to add to the list
 */
void add_to_end(Node*& head, int d);

/**
 * @brief delete the first node in a list with the target data
 * 
 * @param head - pointer to the first node of a singly linked list
 * @param target - data you want to remove from the list
 */
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
    if(head == nullptr){
        head = new Node;
        head -> data = d;
        head -> next = nullptr;
        return;
    }

    Node* cursor = head;

    while(cursor -> next != nullptr){
        cursor = cursor -> next;
    }

    //for(cursor = head; cursor -> next != nullptr; cursor = cursor -> next) ;

    cursor -> next = new Node;
    cursor -> next -> data = d;
    cursor -> next -> next = nullptr;
}


void remove(Node*& head, int target){
    /*
        Cases we may want to consider for removal: 
        1. empty list
        2. one node
        3. generic middle node
        4. target doesn't exist
        5. last node
        6. first node
        7. multiple nodes with target
    */

    // empty list
    if(head == nullptr){
        return;
    }

    // single node case
    if(head -> next == nullptr){
        if(head -> data == target){
            delete head;
            head = nullptr;
        }
        return;
    }

    // first node
    if(head -> data == target){
        Node* second_node = head -> next;
        delete head;
        head = second_node;
        return;
    }
    
}