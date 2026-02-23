#ifndef NODE_H
#define NODE_H

class NODE{
    public:
        typedef int data_type;
        // causes "redeclaration error" when trying to compile
        //typedef double data_type;

        NODE(data_type d = 0, NODE* n = nullptr);

        // accessors
        data_type data() const {return dataF;}
        NODE* next() const {return nextF;}

        // mutator functions
        void set_data(data_type d) {dataF = d;}
        void set_next(NODE* n) {nextF = n;}

    private:
        data_type dataF;
        NODE* nextF;
};

NODE::NODE(data_type d, NODE* n){
    dataF = d;
    nextF = n;
}

#endif