template<class T>
class QUEUE{
    public:
        QUEUE(){front = back = nullptr;}

        // The Big 3 for singly linked list with a tail

        // Add new node with item after "back"
        void push(const T& item);

        // Remove head
        void pop();

        T front()const {return front -> data();}

        bool empty()const {return front == nullptr;}

    private:
        node<T>* front;
        node<T>* back;
};