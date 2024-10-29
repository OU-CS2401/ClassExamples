template <class T>
void my_swap(T& x, T& y){
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main(){
    int a, b;
    a = 7;
    b = 9;
    my_swap(a, b); // instantiation with int

    double y, z;
    y = 3.14;
    z = 1.23;
    my_swap(y, z); // instantiation with double
}




template<class T, class S>
void ssort(T a[], S used){
    S smallsp;
    for(S i = 0; i < used - 1; i++){
        smallsp = i;
        for(S j = i + 1; j < used; j++){
            if(a[j] < a[smallsp]){
                smallsp = j;
            }
        }
        my_swap(a[i], s[smallsp]); // this is my template swap function
    }
}