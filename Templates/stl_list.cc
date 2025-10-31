#include <list>
#include <iostream>
using namespace std;

int main(){
    list<int> nums;
    list<int>::iterator it;

    nums.push_back(1);
    nums.push_back(2);

    it = nums.begin();

    while(true){
        cout << *it << endl;
        it++;
    }

}