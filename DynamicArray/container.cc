class DArray{
    public:
        DArray();

        // The Big 3
        /**
         * @brief Destroy the DArray object
         * 
         */
        ~DArray();

        /**
         * @brief Construct a new DArray object that is a deep copy of an existing one
         * 
         * @param other - the object I'm copying from
         */
        DArray(const DArray& other);

        /**
         * @brief Make myself a deep copy of another existing object
         * 
         * @param other - the objet I'm copying from
         */
        void operator = (const DArray& other);
        
    private:
        // data is just a pointer, not a whole array - the array in allocated on the heap
        int* data;
        // cap (cap) now a variable, not static const
        int cap;
        int used;
        void resize();
};

DArray::DArray(){
    cap = 5;
    used = 0;
    data = new int[cap];
}

// cannot just add to the end of the existing array
// because the array must be contiguous and the bytes
// past my original array might not be available
void DArray::resize(){
    int* tmp;
    tmp = new int[cap + 5];
    
    for(int i = 0; i < used; i++){
        temp[i] = data[i];
    }

    // DO NOT DELETE TMP
    delete []data;
    data = tmp;
    cap += 5;
}

DArray::~DArray(){
    delete []data;
}

DArray::DArray(const DArray& other){
    used = other.used;
    cap = other.cap;

    data = new int[cap];
    for(int i = 0; i < used; i++){
        data[i] = other.data[i];
    }
}

void DArray::operator = (const DArray& other){
    // check if I tried to assign myself to myself
    // if I don't, I will blow away my own data
    if(this == &other){
        return;
    }

    // deallocate the old data array
    // use deconstructor code
    
    // make a copy of other just like in the copy constructor
}