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
class QUEUE{
    public:
        QUEUE() {topPtr = nullptr;}

        // Big 3 for a singly linked list

        // add a new node to the top
        void push(const T& item) // add to tail

        // remove a node from the top
        void pop(); // remove head

        // "peek" at data in the top node
        T front() const;

        // check if the stack is empty
        bool empty() const {return topPtr == nullptr;}


    private:
        node<T>* frontPtr;
        node<T>* backPtr;
};


// Another implementation using a circular array 
template <class T>
class QUEUE2{
    public:
        static const int SIZE = 10;

    private:
        int next_item(int n){return (n + 1) % SIZE;}

        T data[SIZE];
        int front, back;
};






// STL <queue> - priority_queue
// push - inserts in sorted order < 
// uses top() instead of front()
