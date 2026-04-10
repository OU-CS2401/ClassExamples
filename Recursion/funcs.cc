// Recursion - function that calls itself

// Base case - where should the recursion stop (most simple example of the problem)
// Recursive call - with "variant expression" - change something about the call

void print_SLL_back(node* head){
    // base case
    if(head == nullptr){
        return;
    }
    else{
        print_SLL_back(head -> next());
        cout << head -> data() << endl;
    }
}




// selection sort
void selection_sort(int a[], int size){
    // base case
    if(size <= 1){
        return;
    }
    else{
        int smallsp = find_min(a, size);
        int tmp = a[smallsp];
        a[smallsp] = a[0];
        a[0] = tmp; 

        selection_sort(a + 1, size - 1);
    }
}



// LL search
node* search(node* head, int target){
    // if(head == nullptr || head -> data() == target){
    //     return head;
    // }

    if(head == nullptr){
        return nullptr;
    }
    else if(head -> data() == target){
        return head;
    }
    else{
        return search(head -> next(), target);
    }
}