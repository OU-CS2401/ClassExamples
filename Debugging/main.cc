/**
 * @file main.cc
 * @author Patricia Lindner
 * @brief This is a very simply yet buggy program you can use to test out common GDB commands.
 *        When working properly, it should output the average of all positive numbers that the user enters.
 * @date 2026-01-28
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <iostream>
using namespace std;

int main(){
    int sum;
    int n;
    int count;

    cout << "Enter a number to be averaged or negative number to quit: ";
    cin >> n;

    while (n >= 0){
        sum += n;
        count++;
        cin >> n;
    }

    cout << "The average is: " << sum / n << endl;

    return 0;
}