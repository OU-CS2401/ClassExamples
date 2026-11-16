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




// recursive search function for linked list 
node* search(node* head, int target){
    // first base case (list is empty or there are no items left to check)
    if(head == nullptr){
        return nullptr;
    }
    // second base case (the data was found in the first node)
    else if(head -> data() == target){
        return head;
    }
    else{
        // otherwise, check the rest of the list for the same target 
        // if a recursive function has a non-void return type, you must put return before the recursive call
        return search(head -> next(), target);
        
    }
}