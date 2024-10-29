#ifndef T_C_H
#define T_C_H

template <class T>
class T_Cont{
    public:
        static const unsigned SIZE = 100;

        T_Cont();

        void add(const T& item);

    private:
        T data[SIZE];
        unsigned used;
};

#include "t_cont.template"

#endif