#include "tcont.h"
#include <string>

using namespace std;

int main(){
    TCont<int> nums;
    TCont<double> other_nums;
    TCont<string> names;

    nums.add(7);
    names.add("Me");
}