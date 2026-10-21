template <class T>
TLList<T>::TLList(){
    head = tail = nullptr;
}

template <class T>
TLList<T>::~TLList(){
    Tnode<T>* tmp = head;
    while(head != nullptr){
        head = head -> next();
        delete tmp;
        tmp = head;
    }
}

template <class T>
TLList<T>::TLList(const TLList<T>& other){

}

template <class T>
void TLList<T>::add(const T& item){
    if(head == nullptr){
        head = tail = new Tnode<T>(item, nullptr);
    }
    else{
        tail -> set_next(new Tnode<T>(item, nullptr));
        tail = tail -> next();
    }
}