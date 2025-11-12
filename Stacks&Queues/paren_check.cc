#include <stack>
#include <iostream>
using namespace std;

int main(){
    stack<char> s;
    char tmp;

    tmp = cin.get();
    while(tmp != '\n'){
        if(tmp == '('){
            s.push(tmp);
        }
        else if(tmp == ')'){
            if(!s.empty()){
                s.pop();
            }
            else{
                cout << "ERROR: Mismatched parenthesis\n";
                cout << "Too many )\n";
            }
        }
        tmp = cin.get();
    }
    if(!s.empty()){
        cout << "ERROR: Mismatched parenthesis\n";
        cout << "Too many (\n";
    }
}