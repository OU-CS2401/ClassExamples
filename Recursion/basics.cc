// Iterative function to print a singly linked list backwards using a stack 
void print_backwards(node* head){
    stack<node*> s;

    node* cursor = head;
    while(cursor != nullptr){
        s.push(cursor);
        cursor = cursor -> next();
    }

    while(!s.empty()){
        cout << s.top() -> data() << endl;
        s.pop();
    }
}

// Recursive - function that calls itself 
// Base case - when should the recursion stop, or the smallest version of the problem you are trying to solve
// Recursive call w/ variant expression - change something about the parameters 

void print_backwards(node* head){
    // base case
    if(head == nullptr){
        return;
    }
    else{
        print_backwards(head -> next());
        cout << head -> data() << endl;
    }
}