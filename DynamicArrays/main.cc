#include "darray.h"

int main(){
    Darray a1, a3;
    a1.add_item(5);
    // use copy constructor to make new object called a2
    Darray a2(a1);
    a2.add_item(6);

    a3 = a1;
    a1 = a1;
}
