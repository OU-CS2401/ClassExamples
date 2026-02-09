#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

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

    cout << "(*head).data: " << (*head).data << endl;
    // NOTE: without ( ), syntax error because . has greater precedence than *
    cout << "*head.data: " << *head.data << endl;
}