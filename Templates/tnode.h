template <class T> 
class Tnode{
    public:
        Tnode(T d = T(), Tnode* n = nullptr);

        // accessor functions
        T data() const {return data_field;}
        Tnode* next() const {return next_field;}

        // mutator functions
        void set_data(T d) {data_field = d;}
        void set_next(Tnode* n) {next_field = n;}

    private:
        T data_field;
        Tnode* next_field;
};

template <class T> Tnode<T>::Tnode(T d, Tnode<T>* n){
    data_field = d;
    next_field = n;
}