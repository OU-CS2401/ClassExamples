/**
 * This file stores the declaration of a class called Numbers
 * This class is a basic container class that uses an automatically allocated array of a fixed size to store the data.
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
         * @brief Add a new number into the array.
         * 
         * @param a - the number being added
         */
        void add(int a);

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

    private:
        // array to store the data
        int data[SIZE];
        // variable to keep track of how many useful pieces of data have been added to the array
        unsigned used;
};