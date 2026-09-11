/*
    Linux or WSL - GDB - gdb
    MacOS - lldb
*/

#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    int count = 0;

    cout << "Enter a number to be averaged or negative number to quit: ";
    cin >> n;

    while (n >= 0){
        sum += n;
        count++;
        cin >> n;
    }

    cout << "The average is: " << sum / count << endl;

    return 0;
}