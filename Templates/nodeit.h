#include "tnode.h"
#include "tllist.h"

template <class T> class TLList;

template <class T>
class nodeIT{
    public:
        friend TLList<T>;

        nodeIT(TNode<T>* c = nullptr) {current = c;}

        bool operator != (nodeIT other);
        T operator * ();
        // pre-fix
        nodeIT operator ++ ();
        // post-fix
        nodeIT operator ++ (int);

        // -- pre and post fix
        // == 

    private:
        TNode<T>* current;
};

bool nodeIT::operator != (nodeIT other){
    
}

// pre-fix
nodeIT<T> nodeIT<T>::operator ++ (){
    current = current -> next();
    return *this;
}

// post-fix
nodeIT<T> nodeIT<T>::operator ++ (int){
    nodeIT original(*this);
    current = current -> next();
    return original;
}
