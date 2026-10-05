class NODE{
    public:
        NODE(int d = 0, NODE* n = nullptr);

        // accessor functions
        int data() const {return data_field;}
        NODE* next() const {return next_field;}

        // mutator functions
        void set_data(int d) {data_field = d;}
        void set_next(NODE* n) {next_field = n;}

    private:
        int data_field;
        NODE* next_field;
};

NODE::NODE(int d, NODE* n){
    data_field = d;
    next_field = n;
}