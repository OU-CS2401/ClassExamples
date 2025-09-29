/**
 * @brief Simple class declaration for a dynamic array container
 * 
 */

class Darray{
    public:
        /**
         * @brief Construct a new Darray object with initial capacity of 5
         * 
         */
        Darray();

        // The Big 3
        /**
         * @brief Destroy the Darray object - release all dynamic memory
         * 
         */
        ~Darray();
        /**
         * @brief Construct a new Darray object that is a copy of an existing one
         * 
         * @param other - the object to copy from
         */
        Darray(const Darray& other);
        /**
         * @brief Reset an existing object to be a copy of another one. Must deallocate old data
         * 
         * @param other - the object to copy from
         */
        void operator = (const Darray& other);

        /**
         * @brief Add a new item to the array
         * 
         * @param item - the number you want to add
         */
        void add_item(double item);

    private:
        double* data;
        // size now a variable, not static const
        int size;
        int used;

        /**
         * @brief Allocate a new larger array and copy the existing data to increase overall capacity
         * 
         */
        void resize();
};