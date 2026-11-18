#include <iostream>
#include <string>
#include "colors.h"

using namespace std;

int main(){
    cout << "-------------------\n";
    // outer loop for rows
    for(int r = 0; r < 6; r++){
        cout << "|";
        // inner loop for cols
        for(int c = 0; c < 6; c++){
        //for(char c = 'A'; c <= 'F'; c++)
            //cout << board[r][c];
            //char col = 'A' + c;
            cout << (char)('A' + c) << r + 1 << "|";
        }
        cout << endl;
        cout << "-------------------\n";
    }
}

// My implementation that adds parsing string and highlighting the space entered 
/*
int main(){
    cout << "Enter a space: ";
    string s;
    getline(cin, s);

    int col = (int)(toupper(s[0]) - 'A');
    int row = (int)(s[1] - '1');
    
    // outer loop for rows
    for(int r = 0; r < 6; r++){
        cout << "-------------------\n";
        cout << "|";
        // inner loop for cols
        for(int c = 0; c < 6; c++){
            // if row and column we are outputting match the row and column the user entered, output in red on white background
            if(col == c && row == r){
                cout << RED << B_WHITE << (char)('A' + c) << (char)('1' + r) << RESET << "|";
            }
            else{
                cout << (char)('A' + c) << (char)('1' + r) << "|";
            }
        }
        cout << "\n";
    }
    cout << "-------------------\n";
}
*/


// Turn taking 
next_mover() == HUMAN
next_mover() == COMPUTER

