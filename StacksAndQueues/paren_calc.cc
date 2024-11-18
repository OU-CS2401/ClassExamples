((6 + (5 * 4)) * 2)

int main(){
    STACK<int> nums;
    STACK<char> ops;

    char tmp;
    int n1, n2, n3;

    tmp = cin.get();
    while(tmp != '\n'){
        if(isdigit(tmp)){
            cin.putback(tmp);
            cin >> n1;
            nums.push(n1);
        }
        else if(isoperation(tmp)){
            ops.push(tmp);
        }
        else if(tmp == ')'){
            // do some math
            if(!nums.empty()){
                n2 = nums.top();
                nums.pop()
            }
            if(!nums.empty()){
                n3 = nums.top();
                nums.pop();
            }

            n1 = eval(n3, n2, ops.top());
            ops.pop();
            nums.push(n1);
        }
    }

    if(!nums.empty()){
        int ans = nums.top();
        nums.pop();
        if(nums.empty())
            cout << "Answer: " << ans;
        else
            cout << "ERROR: too many numbers\n";
    }
}