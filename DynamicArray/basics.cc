/* 

    Review
        * Dynamic memory is explicitly allocated and deallocated
        * If you do not deallocate, memory stays around and is unusable because you can't find it
        * Pointers are variables that can hold the address of something else
            * They can be any type
            * Can do pointer math, move by sizeof(data_type)

*/

/*
    The following code:
        1. creates a pointer (automatic memory)
        2. allocated dynamic memory using the [ ] operator so you get an array instead of a single item
        3. sets the value of the first element of the array to 5
        4. in loop, sets the values of the array elements to 5, 10, 15, 20
*/
    int* data;
    int size = 4;
    data = new int[size];

    *data = 5;
    for(int i = 0; i < size; i++){
        *(data + i) = (i + 1) * 5;
    }

/* 

    Traditional array finds where to store something by doing array_name[i] which is the same as 
    array_name + (i * sizeof(data_type))

    SO..........
    I can use [] with a dynamic array as well since the meaning is the same because both traditional and
    dynamic arrays are contiguous in memory.

    Implication: searching and sorting algorithms are the same

    So why do dynamic? If I forget to delete (delete []data;), memory stays unusable:
        * Answer: ability to resize while the program is running
                cannot just add to the end of the existing array because the array must be contiguous
                and the bytes past my original array might not be available

*/

// Resize method
    // create a temp pointer of the same type
    int* tmp;
    // allocate a new larger array to the tmp pointer
    tmp = new int[size + 5];

    // copy all items from the original array to the tmp
    for(int i = 0; i < size; i++){
        temp[i] = data[i];
    }

    // deallocate the original array : DO NOT DELETE TMP!!!
    delete []data;
    // store the new array's address in tmp
    data = tmp;
    // increment size so you remember that the array is larger now
    size += 5;