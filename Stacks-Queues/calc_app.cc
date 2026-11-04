#include <iostream>
#include "stack.h"

using namespace std;

int main(){
    STACK<int> nums;
    STACK<char> ops;
    char tmp;
    int n1, n2, n3;

    // cin >> tmp;
    tmp = cin.get();
    while(tmp != '\n'){
        if(isdigit(tmp)){
            cin.putback(tmp);
            cin >> n1;
            nums.push(n1);
        }
        else if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/'){
            ops.push(tmp);
        }
        else if(tmp == ')'){
            // do math
            // error checking???
            n2 = nums.top();
            nums.pop();
            n1 = nums.top();
            nums.pop();

            n3 = eval(n1, n2, ops.top());
            ops.pop();

            nums.push(n3);
        }

        tmp = cin.get();
    }

}