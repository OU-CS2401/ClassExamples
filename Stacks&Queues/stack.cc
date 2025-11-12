using namespace std;

template<class T>
class STACK{
    public:
        STACK(){topPtr = nullptr;}

        // The Big 3 for a singly linked list

        // add a new item to the top of the stack 
        void push(const T& item);
        // remove the top item from the stack
        void pop();

        // "peek" at the data in the top item
        T top()const {return topPtr -> data();}

        // check if the stack is empty
        bool empty()const {return topPtr == nullptr;}

    private:
        node<T>* topPtr;
};

template<class T>
void STACK<T>::push(const T& item){
    topPtr = new node<T>(item, topPtr);
}

template<class T>
void STACK<T>::pop(){
    node<T>* rmptr = topPtr;

    topPtr = topPtr -> next();
    delete rmptr;
}