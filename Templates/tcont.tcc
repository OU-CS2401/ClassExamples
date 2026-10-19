
template <class T>
TCont<T>::TCont(){
    used = 0;
}

template <class T>
void TCont<T>::add(const T& item){
    if(used < SIZE){
        data[used] = item;
        used++;
    }
}