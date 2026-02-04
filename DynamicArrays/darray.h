/**
 * @file darray.h
 * @author Patricia Lindner
 * @brief This is the header file for a class that stores data using a dynamic array (similar to a vector)
 * @date 2026-02-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#ifndef DARRAY_H
#define DARRAY_H

// for size_t
#include <cstdlib>

class Darray{
    public:
        /**
         * @brief Construct a new Darray object - set initial value of used to 0.
         * 
         */
        Darray();

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
        double *data;
        size_t used;
        size_t size;

        /**
         * @brief Make the array larger when there is no space left to add new items
         * 
         */
        void resize();
};

#endif 