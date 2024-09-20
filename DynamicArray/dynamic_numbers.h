/**
 * This file stores the declaration of a class called Numbers
 * This class is a basic container class that uses an automatically allocated array of a fixed size to store the data.
 */

class Numbers{
    public:
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

        void selection_sort();

        void bubble_sort();

        void insertion_sort();

    private:
        // array to store the data
        int *data;
        // variable to keep track of how many useful pieces of data have been added to the array
        unsigned used;
        unsigned size;

        // function to add space
        void resize();

};