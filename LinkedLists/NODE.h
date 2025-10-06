class NODE{
    public:
        NODE(int d = 0, NODE* n = nullptr);

        // accessor
        int data() const {return dataF;}
        NODE* next() const {return nextF;}

        // mutator
        void set_data(int d) {dataF = d;}
        void set_next(NODE* n) {nextF = n;}

    private:
        int dataF;
        NODE* nextF;
};

NODE::NODE(int d, NODE* n){
    dataF = d;
    nextF = n;
}