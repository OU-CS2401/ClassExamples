#include <iostream>
#include "tllist.h"
using namespace std;

/*
    To compile, just run the command:

    g++ main.cc
*/

int main(){
    TLList<int> nums;
    TLList<int>::iterator it;

    nums.add(1);
    nums.add(2);
    nums.add(3);
    // use the iterator to output the list
    it = nums.begin();
    while(it != nums.end()){
        cout << *it << endl;
        // You should be able to use the ++ on either side of the iterator
        //it++;
        ++it;
    }
}