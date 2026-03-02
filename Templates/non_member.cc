// template function
#include <string>

template<typename T, typename S> void my_swap(T& a, S& b);

int main(){
    int x = 5, y = 7;
    std::string a = "hello", b = "world";
    char c = 'C', s = 'S';

    my_swap(x, y); // instantiation for int
    my_swap(a, b); // instantiation for string
    my_swap(x, c);
}

template<typename T, typename S> void my_swap(T& a, S& b){
    T tmp = a;
    a = b;
    b = tmp;
}