#include "clock.h"
#include <iostream>
#include <iomanip> // for setw and setfill

using namespace std;

void Clock::output() const{
    cout << hour << ":" << setw(2) << setfill('0') << minute << endl;
}

void Alarm::output() const{
    Clock::output();
    cout << alarm_h << ":" << setw(2) << setfill('0') << alarm_m << endl;
}

void Alarm::output(ostream& outs) const{
    // What will this do if I pass a file as the stream? 
    Clock::output();
    outs << alarm_h << ":" << setw(2) << setfill('0') << alarm_m << endl;
}

void Alarm::set_alarm(int ah, int am){
    alarm_h = ah;
    alarm_m = am;
}

bool Alarm::is_ringing() const{
    // if the hour and minute are "private" instead of "protected" in Clock, then you would have to use accessor functions to access them instead of just their names
    return hour == alarm_h && minute == alarm_m;
}

Clock::Clock(){
    hour = 0;
    minute = 0;
}

Alarm::Alarm(){
    // call the Clock constructor to initialize the inherited data
    Clock();
    // initialize the Alarm specific data
    alarm_h = 0;
    alarm_m = 0;
}

// Alarm::Alarm(const Clock& c){
//     // use c's hour and minute
//     // have to use accessor functions because hour and minute are not public within clock
//     hour = c.get_hour();
//     minute = c.get_minute();

//     // use default values for the alarm time
//     alarm_h = 0;
//     alarm_m = 0;
// }

bool Clock::is_equal(const Clock& other) const{
    return hour == other.hour && minute == other.minute;
}

bool Alarm::is_equal(const Alarm& other) const{
    return Clock::is_equal(other) && alarm_h == other.alarm_h && alarm_m == other.alarm_m;
}