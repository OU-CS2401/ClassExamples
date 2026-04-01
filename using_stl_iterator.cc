#include <vector>
#include <iostream>
using namespace std;

int main(){
    // declare a vector of integers
    vector<int> nums;
    // declare an iterator for a vector of integers
    vector<int>::iterator it;

    // add some stuff to the vector

    // use the iterator to output everything in the vector
    it = nums.begin();
    while(it != nums.end()){
        cout << *it << endl;
        ++it;
    }


    int x = 5;
    cout << ++x << endl; // 6
    x = 5;
    cout << x++ << endl; // 5 , but x is now = 6

}

/*
// STL containers that have iterators
1. vector - dynamic array
2. list - doubly linked list
3. set - sorted list of unique items (no duplicates); implemented as a binary search tree
4. multiset - sorted list of items (duplicates allowed); implemented as a binary search tree
5. map/multimap also have iterators, but I won't be covering those at all in this course

// STL containers the do not have iterators (because you aren't supposed to be allowed access to the middle)
1. stack
2. queue
3. priority_queue

*/