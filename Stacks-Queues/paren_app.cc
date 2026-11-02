// Check input for matching parentheses 
#include "stack.h"
#include <iostream>

using namespace std;

int main(){
    STACK<char> s;
    char tmp;

    tmp = cin.get();
    while(tmp != '\n'){
        if(tmp == '(' || tmp == '{'){
            s.push(tmp);
        }
        else if(tmp == ')'){
            if(!s.empty() && s.top() == '(')
                s.pop();
            else
                cout << "ERROR: not enough (" << endl;
        }
        else if(tmp == '}'){
            if(!s.empty() && s.top() == '{')
                s.pop();
            else
                cout << "ERROR: not enough {" << endl;
        }
        tmp = cin.get();
    }

    if(!s.empty()){
        cout << "ERROR: too many (" << endl;
    }
    else{
        cout << "everything's good" << endl;
    }
}