class DNODE{
    public:
        DNODE(int d = 0, DNODE* p = nullptr, DNODE* n = nullptr);

        // accessor
        int data() const {return dataF;}
        DNODE* next() const {return nextF;}
        DNODE* prev() const {return prevF;}

        // mutator
        void set_data(int d) {dataF = d;}
        void set_next(DNODE* n) {nextF = n;}
        void set_prev(DNODE* p) {prevF = p;}

    private:
        int dataF;
        DNODE* nextF;
        DNODE* prevF;
};

DNODE::DNODE(int d, DNODE* p, DNODE* n){
    dataF = d;
    prevF = p;
    nextF = n;
}