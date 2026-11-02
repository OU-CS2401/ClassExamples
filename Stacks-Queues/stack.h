/*
    Standard Template Library (STL)

    vector - dynamic array
    list - doubly linked list
    stack
    queue
    priority_queue
    set
    multiset

*/

template <class T>
class STACK{
    public:
        STACK() {topPtr = nullptr;}

        // Big 3 for a singly linked list

        // add a new node to the top
        void push(const T& item) {topPtr = new node<T>(item, topPtr);}

        // remove a node from the top
        void pop();

        // "peek" at data in the top node
        T top() const;

        // check if the stack is empty
        bool empty() const {return topPtr == nullptr;}


    private:
        node<T>* topPtr;
};

template <class T>
void STACK<T>::pop(){
    node<T>* tmp = topPtr;

    topPtr = topPtr -> next();
    delete tmp;
}