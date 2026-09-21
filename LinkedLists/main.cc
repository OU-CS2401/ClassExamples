struct node{
    int data;
    node* next;
};

int main(){
    // pointer to the beginning of the list
    node* head = nullptr;

    head = new node;
    (*head).next = nullptr;
    (*head).data = 1;

    (*head).next = new node;
    (*(*head).next).next = nullptr;
    (*(*head).next).data = 2;

}