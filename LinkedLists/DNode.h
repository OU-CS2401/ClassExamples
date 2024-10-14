class DNode{
    public:
        DNode(int d = 0, DNode* p = nullptr, DNode* n = nullptr);

        // accessors
        int data() const {return dataF;}
        DNode* next() const {return nextF;}
        DNode* prev() const {return prevF;}

        // mutator
        void set_data(int d) {dataF = d;}
        void set_next(DNode* n) {nextF = n;}
        void set_prev(DNode* p) {prevF = p;}

    private:
        int dataF;
        DNode* nextF;
        DNode* prevF;
};

DNode::DNode(int d, DNode* p, DNode* n){
    dataF = d;
    nextF = n;
    prevF = p;
}