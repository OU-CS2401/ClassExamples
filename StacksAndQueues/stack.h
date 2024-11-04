template <class T>
class STACK{
    public:
        STACK() {topPtr = nullptr;}

        // The Big 3 for singly linked list

        // stack functionality
        void push(const T& item); // add to head

        void pop(); // remove head

        T top() const {return topPtr -> data();}

        bool empty() const {return topPtr == nullptr;}

    private:
        node<T>* topPtr;
};