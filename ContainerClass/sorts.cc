/**
 * @brief This file gives "framework" code for the three sorts I showed in class.
 *        These all assume that they are member function of a class.
 *        For them to work, you need to replace <base_data_type> with the type of object your container is storing.
 * 
 */

void MyClass::selection_sort(){
    int i, j, smallsp;
    <base_data_type> tmp;

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

void MyClass::bubble_sort(){
    int i;
    // upper_bound is used to keep track of the last item I need to check (the upper end gets sorted first, so can be skipped on following iterations)
    int upper_bound = used - 1;
    <base_data_type> tmp;
    bool done = false;

    // continue looping until the array is sorted
    while(!done){
        // start by assuming I am done
        done = true;

        // compare the item at position i to the item next to it
        for(i = 0; i < upper_bound; i++){
            // if the items are out of order
            if(data[i] > data[i + 1]){
                // swap these items
                tmp = data[i + 1];
                data[i + 1] = data[i];
                data[i] = tmp;

                // need to go through the array again; NOT done
                done = false;
            }
        }
        upper_bound--;
    }
}

void MyClass::insertion_sort(){
    // i is the position of the item to be inserted next
    for (int i = 1; i < used; i++)
    {
        int next = a[i];
        // Move all elements larger than a[i] up on spot in the array
        int j = i;
        while (j > 0 && a[j - 1] > next)
        {
            a[j] = a[j - 1];
            j--;
        }
        // Insert the element that was at a[i] in the correct position
        a[j] = next;
    }
}