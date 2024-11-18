(())()((()))


int main(){
    STACK<char> s;
    char tmp;

    //cin >> tmp;
    tmp = cin.get();
    while(tmp != '\n'){
        if(tmp == '(' || tmp == '[' || tmp == '{'){
            s.push(tmp);
        }
        else if(tmp == ')'){
            if(!s.empty() && s.top() == '(')
                s.pop();
            else{
                cout << "ERROR: too many )\n";
                break;
            }
        }
        else if(tmp == ']'){
            if(!s.empty())
                s.pop();
            else{
                cout << "ERROR: too many ]\n";
                break;
            }
        }
        else if(tmp == '}'){
            if(!s.empty())
                s.pop();
            else{
                cout << "ERROR: too many }\n";
                break;
            }
        }

        tmp = cin.get();
    }
}