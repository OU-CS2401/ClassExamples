// Class declaration
#ifndef DAC_H
#define DAC_H

template <class T>
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
        T* data;
        // cap (cap) now a variable, not static const
        int cap;
        int used;
        void resize();
};

#include "DAcontainer.template"

#endif