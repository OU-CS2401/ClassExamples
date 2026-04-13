#ifndef BNODE_H
#define BNODE_H

class BNODE{
    public:
        typedef int data_type;

        BNODE(data_type d = 0, BNODE* r = nullptr, BNODE* l = nullptr);

        // accessors
        data_type data() const {return dataF;}
        BNODE* left() const {return leftF;}
        BNODE* right() const {return rightF;}

        // these versions allow the clear function to work 
        BNODE*& left() {return leftF;}
        BNODE*& right() {return rightF;}

        // mutator functions
        void set_data(data_type d) {dataF = d;}
        void set_left(BNODE* n) {leftF = n;}
        void set_right(BNODE* p) {rightF = p;}

    private:
        data_type dataF;
        BNODE* leftF;
        BNODE* rightF;
};

BNODE::BNODE(data_type d, BNODE* r, BNODE* l){
    dataF = d;
    leftF = l;
    rightF = r;
}

#endif