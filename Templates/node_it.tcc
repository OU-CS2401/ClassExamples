
template <class T>
bool node_it<T>::operator != (const node_it<T> other) const{
    return current != other.current;
}

template <class T>
bool node_it<T>::operator == (const node_it<T> other) const{
    return current == other.current;
}

template <class T>
T node_it<T>::operator *() const{
    return current -> data();
}

template <class T>
node_it<T> node_it<T>::operator ++ () {
    // move iterator to next node and return updated iterator
    current = current -> next();
    return *this;
}

template <class T>
node_it<T> node_it<T>::operator ++ (int) {
    // move iterator to next node and return the original iterator
    node_it original(*this);
    current = current -> next();
    return original;
}