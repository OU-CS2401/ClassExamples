#include <list>

template<class T>
class Stack:private list<T>{
    void push(T item) {push_front(item);}

    void pop() {pop_front();}

    T top() const {return *begin();}

    bool empty() const {return size() == 0;}
};