#ifndef DNODE_H
#define DNODE_H

class DNODE{
    public:
        typedef int data_type;
        // causes "redeclaration error" when trying to compile
        //typedef double data_type;

        DNODE(data_type d = 0, DNODE* p = nullptr, DNODE* n = nullptr);

        // accessors
        data_type data() const {return dataF;}
        DNODE* next() const {return nextF;}
        DNODE* prev() const {return prevF;}

        // mutator functions
        void set_data(data_type d) {dataF = d;}
        void set_next(DNODE* n) {nextF = n;}
        void set_prev(DNODE* p) {prevF = p;}

    private:
        data_type dataF;
        DNODE* nextF;
        DNODE* prevF;
};

DNODE::DNODE(data_type d, DNODE* p, DNODE* n){
    dataF = d;
    nextF = n;
    prevF = p;
}

#endif