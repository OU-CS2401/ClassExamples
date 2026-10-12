class DNODE{
    public:
        DNODE(int d = 0, DNODE* p = nullptr, DNODE* n = nullptr);

        // accessor functions
        int data() const {return data_field;}
        DNODE* next() const {return next_field;}
        DNODE* prev() const {return prev_field;}

        // mutator functions
        void set_data(int d) {data_field = d;}
        void set_next(DNODE* n) {next_field = n;}
        void set_prev(DNODE* p) {prev_field = p;}

    private:
        int data_field;
        DNODE* next_field;
        DNODE* prev_field;
};

DNODE::DNODE(int d, DNODE* p, DNODE* n){
    data_field = d;
    next_field = n;
    prev_field = p;
}