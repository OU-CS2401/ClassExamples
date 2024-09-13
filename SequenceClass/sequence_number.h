/**
 * This file stores the declaration of a class called Numbers
 * This class is a sequence container class that uses an automatically allocated array of a fixed size to store the data.
 * By being a sequence class, all data must be kept in the order it was put by the user.
 */

class Numbers{
    public:
        // A variable to store the size fo the array so that it can be changed more easily if needed.
        static const unsigned SIZE = 500;

        /**
         * @brief Construct a new Numbers object. Sets the used to 0.
         * 
         */
        Numbers();

        /**
         * @brief Show all the numbers that have been added to the array.
         * 
         */
        void display() const;

        /**
         * @brief Put a new item before the one pointed to by current_index or at the beginning by default.
         * 
         * @param item - the number to insert
         */
        void insert(int item);

        /**
         * @brief Determine if a target number is in the data array.
         * 
         * @param target - the number you are looking for
         * @return true - the number is in the array
         * @return false - the number is not in the array
         */
        bool search(int target) const;

        /**
         * @brief Delete a number from the array. This function uses a simple method because the
         *        order of the data in the array does not matter.
         * 
         * @param target - the number to delete
         */
        void remove(int target);

        /**
         * @brief Sort the array using the selection sort algorithm
         * 
         */
        void selection_sort();

        /**
         * @brief Sort the array using an optimized bubble sort algorithm
         * 
         */
        void bubble_sort();

        /**
         * @brief Sort the array using the insertion sort algorithm
         * 
         */
        void insertion_sort();

        // iterator functions
        /**
         * @brief Move current_index to the beginning of the array
         * 
         */
        void start() {current_index = 0;}

        /**
         * @brief Move current_index to the next item in the array
         * 
         */
        void advance() {current_index++;}

        /**
         * @brief Verify if current_index is pointing to an item in the used portion of the array
         * 
         * @return true - current_index is valid
         * @return false - current_index is invalid
         */
        bool is_item() const {return current_index < used;}

        /**
         * @brief Return the data in the cell current_index is pointing to
         * 
         * @return int - the value current_index is pointing to
         */
        int current() const {return data[current_index];}



    private:
        // array to store the data
        int data[SIZE];
        // variable to keep track of how many useful pieces of data have been added to the array
        unsigned used;

        // internal iterator
        unsigned current_index;
};