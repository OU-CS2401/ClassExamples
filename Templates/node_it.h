
// forward declaration
template <class T> class TLList;

template <class T>
class node_it{
    public:
        friend class TLList<T>;
        node_it(Tnode<T>* c = nullptr) {current = c;}

        bool operator != (const node_it other) const;
        bool operator == (const node_it other) const;

        T operator * () const;

        // pre-fix ++
        node_it operator ++ ();
        // post-fix
        node_it operator ++ (int);

        // pre and post --

    private:
        Tnode<T>* current;
};

#include "node_it.tcc"