// Selection Sort
void MyClass::s_sort(){
    int i, j, smallsp;
    array_data_type tmp;

    // this loop keeps track of the position where I am putting the smallest piece of data
    for(i = 0; i < used - 1; i++){
        smallsp = i;

        // this loop looks for the smallest piece of data in the rest of the array
        for(j = i + 1; j < used; j++){
            // if the data where I am looking is "smaller" than the data in the current smallsp, make smallsp equal to j
            if (data[j] < data[smallsp]){
                smallsp = j;
            }
        }

        // swap the smallest data into the correct location (given by i)
        // want to do the swapping in the outer loop not the inner loop
        // if I do it in the inner loop, it will execute MANY times for each iteration of the outer loop (which is not necessary)
        tmp = data[i];
        data[i] = data[smallsp];
        data[smallsp] = tmp;
    }
}

// Bubble Sort
void MyClass::b_sort(){
    // upper_bound is used in this implementation to stop checking the parts of the array we know are already sorted
    int i, upper_bound = used - 1;
    array_data_type tmp;
    bool done = false;

    while(!done){
        // start by assuming I am done
        done = true;

        // compare i to the item next to it
        for(i = 0; i < upper_bound; i++){
            // if the items are out of order
            if(data[i] > data[i+1]){
                // swap these items
                tmp = data[i+1];
                data[i+1] = data[i];
                data[i] = tmp;

                // need to go again
                done = false;
            }
        }
        upper_bound--;
    }
}

// Insertion Sort
void MyClass::i_sort(){
    for (int i = 1; i < used; i++)
    {
        // save the item I'm inserting
        array_data_type next = a[i];
        // Move all larger elements up
        int j = i;
        while (j > 0 && a[j - 1] > next)
        {
            a[j] = a[j - 1];
            j--;
        }
        // Insert the element at the correct position
        a[j] = next;
    }
}