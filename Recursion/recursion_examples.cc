void selection_sort_r(int a[], int size){
    // base case
    if(size <= 1){
        return;
    }
    else{
        int smallsp = find_min(a, size);
        int tmp = a[0];
        a[0] = a[smallsp];
        a[smallsp] = tmp;

        selection_sort_r(a + 1, size - 1);
    }
}


// search for target in a linked list
node* search(node* head, int target){
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



/* print an integer vertically
1234

1
2
3
4
*/

void print_vertical(int n){
    // base case
    if(n < 10){
        cout << n << endl;
    }
    else{
        print_vertical(n / 10);
        cout << n % 10 << endl;
    }
}