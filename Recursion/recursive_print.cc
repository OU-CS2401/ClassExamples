void print_list_iterative(node* head){
    node* cursor = head;
    stack<int> s;

    while(cursor != nullptr){
        s.push(cursor -> data());
        cursor = cursor -> next();
    }

    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
}


void print_list_recursive(node* head){
    if(head == nullptr){
        return;
    }
    else{
        print_list_recursive(head -> next());
        cout << head -> data();
    }
}