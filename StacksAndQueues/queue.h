template <class T> 
class QUEUE{
    public:
        QUEUE(){front = back = nullptr;}

        // The Big 3 for singly linked list with tail

        void push(const T& item); //add to tail

        void pop(); // remove head

        T front() const; // return data in front

        bool empty() const;

    private:
        node<T>* front;
        node<T>* back;
}