/**
 * @brief This file demonstrates a parent - child relationship between two classes
 * 
 */

#include <iostream>
#include <iomanip>
using namespace std;

/**
 * @brief A class that defines a very simple clock
 * 
 * This class will be a "Parent" class
 */
class Clock{
    public:
        Clock() {hour = minute = 0;}

        void set_time(int h, int m);
        // This function should handle the minute roll-over, but I'm ignoring that for simplicity
        void advance(int amt = 1) {minute += amt;}

        int get_hour()const {return hour;}
        int get_minute()const {return minute;}

        // setw(2) field width of 2
        // setfill('0') fill extra space with '0' if necessary
        void output()const;

        bool is_equal(const Clock& other)const;

    protected:
        int hour;
        int minute;
};


// Because of :public Clock, Alarm has all the characteristics of a Clock as well
/*
    If you try to compile, you will get errors about hour and minute.
    Possible fixes: 
        1. Change "hour" and "minute" in the Alarm implementations to use the Clock accessor functions for those attributes. 
        2. Change "private" to "protected" in the Clock class to allow child classes direct access. 
*/

class Alarm:public Clock{
    public:
        Alarm();
        void set_alarm(int ah, int am);
        bool is_ringing()const;

        //void output()const;

        //bool is_equal(const Alarm& other)const;

    private:
        int alarm_h;
        int alarm_m;
};


int main(){
    Clock c, c2;
    Alarm a, a2;

    // use the clocks
    c.set_time(9, 0);
    cout << "C: ";
    c.output();
    c.advance();
    cout << "C after advance: ";
    c.output();

    c2.set_time(8,35);
    cout << endl << "C2: ";
    c2.output();

    // use the alarms
    // What does the output function print? Uncomment the Alarm::output function and try again.
    a.set_time(9, 0);
    cout << "\n\n" << "A: ";
    a.output();
    a.advance();
    cout << "A after advance: ";
    a.output();
    cout << endl;

    a2.set_time(9, 1);

    /*
        Test the is_equal function
        1. Leave Alarm::is_equal commented out. What happens?
        2. Uncomment Alarm::is_equal. What happens?    
    */
    if(c.is_equal(c2)) cout << "C is equal to C2\n";
    else cout << "C is NOT equal to C2\n";

    if(a.is_equal(a2)) cout << "A is equal to A2\n";
    else cout << "A is NOT equal to A2\n";

    if(c.is_equal(a)) cout << "C is equal to A\n";
    else cout << "C is NOT equal to A\n";

    if(a.is_equal(c)) cout << "A is equal to C\n";
    else cout << "A is NOT equal to C\n";

}

void Clock::set_time(int h, int m){
    hour = h;
    minute = m;
}

void Clock::output()const{
    cout << hour << ":" << setw(2) << setfill('0') << minute << endl;
}

bool Clock::is_equal(const Clock& other)const{
    return hour == other.hour && minute == other.minute;
}

Alarm::Alarm(){
    hour = minute = alarm_h = alarm_m = 0;
}

void Alarm::set_alarm(int ah, int am){
    alarm_h = ah;
    alarm_m = am;
}

bool Alarm::is_ringing()const{
    return alarm_h == hour && alarm_m == minute;
}

// void Alarm::output()const{
//     Clock::output();
//     cout << endl << alarm_h << ":" << setw(2) << setfill('0') << alarm_m << endl;
// }

// bool Alarm::is_equal(const Alarm& other)const{
//     return Clock::is_equal(other) && hour == other.hour && minute == other.minute;
// }

