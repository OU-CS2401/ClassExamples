template <class T>
class TNode{
    public:
        Node(T d = 0, TNode* n = nullptr);

        // accessors
        T data() const {return dataF;}
        TNode* next() const {return nextF;}

        // mutator
        void set_data(T d) {dataF = d;}
        void set_next(TNode* n) {nextF = n;}

    private:
        T dataF;
        TNode* nextF;
};

template <class T>
TNode<T>::TNode(T d, TNode* n){
    dataF = d;
    nextF = n;
}