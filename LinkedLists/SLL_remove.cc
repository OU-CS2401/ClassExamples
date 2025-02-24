/**
 * @brief This file gives example code from class for using a linked list as part of a main program
 * 
 */
#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

/**
 * @brief output all the data in the list
 * 
 * @param head - pointer to the beginning of the list
 */
void show_all(node* head){
    node* tmp = head;
    while(tmp != nullptr){
        cout << tmp -> data << endl;
        tmp = tmp -> next;
    }
    cout << endl;
}

/**
 * @brief add a new node to the beginning of the list with the data in item
 * 
 * @param head - pointer to the beginning of the list
 * @param item - the data I want to add to the new node
 */
void add_to_beginning(node*& head, int item){
    if(head == nullptr){
        head = new node;
        head -> data = item;
        head -> next = nullptr;
        return;
    }
    else{
        node* tmp = new node;
        tmp -> data = item;
        tmp -> next = head;
        head = tmp;
    }
}

/**
 * @brief add a new node with the data in item to the end of the list
 * 
 * @param head - pointer to the beginning of the list
 * @param item - the data for the new node
 */
void add_to_end(node*& head, int item){
    if(head == nullptr){
        head = new node;
        head -> data = item;
        head -> next = nullptr;
        return;
    }
    
    node* tmp = head;
    while(tmp -> next != nullptr){
        tmp = tmp -> next;
    }
    tmp -> next = new node;
    tmp -> next -> data = item;
    tmp -> next -> next = nullptr;
}

/**
 * @brief remove the node with the target data from the list
 * 
 * @param head - pointer to the beginning of the list
 * @param target - the item I want to remove
 * 
 *  Special cases: 
 *  1. item not found
 *  2. empty list
 *  3. last element
 *  4. one item
 *  5. first element
 */
void remove(node*& head, int target){
    // handle empty list
    if (head == nullptr) return;

    if(head -> data == target){
        // The two methods below are equally valid. Use ONLY ONE.

        // Option 1:
        // node* tmp;
        // tmp = head -> next;
        // delete head;
        // head = tmp;

        // Option 2:
        node* tmp = head;
        head = head -> next;
        delete tmp;

        return;
    }

    // move tmp to point at the node before the one I want to remove
    node *before, *tmp;
    for(tmp = head; tmp -> next != nullptr && tmp -> next -> data != target; tmp = tmp -> next);

    // since we could have exited the loop without finding the data we were looking for
    // check to make sure that if tmp is pointing to the last node, the data isn't what we were wanting to remove
    // if both are true (tmp pointing to last node AND data in the last node is not the target)
    // then exit the function because the data isn't in the list
    if(tmp -> next == nullptr && tmp -> data != target) return;

    // if we make it here, then tmp is pointing to the node before the one we want to remove
    // set before pointer to tmp and then move tmp to next node
    before = tmp;
    tmp = tmp -> next;

    // make the node before the one we want to remove point to the node after the one we want to remove
    before -> next = tmp -> next;
    // deallocate the node we wanted to remove
    delete tmp;
}



int main(){
    // start with an empty list
    node* head = nullptr;

    for(int i = 1; i < 5; i++)
        add_to_beginning(head, i);
    
    cout << "List after add_to_beginning:\n";
    show_all(head);

    for(int i = 5; i < 10; i++)
        add_to_end(head, i);

    cout << "List after add_to_end:\n";
    show_all(head);

    // try to remove node that doesn't exist
    remove(head, 15);
    cout << "List after trying to remove 15:\n";
    show_all(head);

    // remove a node in the middle of the list
    remove(head, 1);
    cout << "List after removing 1:\n";
    show_all(head);

    // remove the last node (9)
    remove(head, 9);
    cout << "List after removing last node:\n";
    show_all(head);

    // remove all nodes except 7 and 8
    for(int i = 2; i < 7; i++){
        remove(head, i);
    }
    cout << "List after removing all but last 2 nodes:\n";
    show_all(head);

    // remove head node
    remove(head, 7);
    cout << "List after removing head (7):\n";
    show_all(head);

    // try to remove node that doesn't exist with single node list
    remove(head, 15);
    cout << "List after trying to remove 15:\n";
    show_all(head);

    // remove last node (single node list case)
    remove(head, 8);
    cout << "List after removing 8:\n";
    show_all(head);
}