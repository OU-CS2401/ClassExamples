class Node{
    public:
        Node(int d = 0, Node* n = nullptr);

        // accessors
        int data() const {return dataF;}
        Node* next() const {return nextF;}

        // mutator
        void set_data(int d) {dataF = d;}
        void set_next(Node* n) {nextF = n;}

    private:
        int dataF;
        Node* nextF;
};

Node::Node(int d, Node* n){
    dataF = d;
    nextF = n;
}