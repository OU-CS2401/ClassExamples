#ifndef TNODE
#define TNODE

template<class T>
class Tnode{
    public:
        // T() as a default uses the default constructor for the T type
        Tnode(T d = T(), Tnode* n = nullptr);

        T data()const {return data_field;}
        Tnode* next()const {return next_field;}

        void set_data(T item) {data_field = item;}
        void set_next(Tnode* n) {next_field = n;}

    private:
        T data_field;
        Tnode* next_field;
};

template<class T>
Tnode<T>::Tnode(T d, Tnode* n){
    data_field = d;
    next_field = n;
}

#endif