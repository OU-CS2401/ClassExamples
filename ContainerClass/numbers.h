#ifndef NUMS_H
#define NUMS_H

class Numbers{
    public:
        /**
         * @brief Construct a new Numbers object - set initial value of used to 0.
         * 
         */
        Numbers() {used = 0;}

        /**
         * @brief Insert a new number into the array
         * 
         * @param i - the number to insert
         */
        void add_item(double i);

        /**
         * @brief Return the total of all numbers stored in the array
         * 
         * @return double - total of all stored numbers
         */
        double sum_all() const;

        /**
         * @brief - Show all numbers stored by the user
         * 
         */
        void see_all() const;

    private:
        double data[100];
        unsigned used;
};

#endif 