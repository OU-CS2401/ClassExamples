#include "clock.h"

using namespace std;

int main(){
    // create 2 clocks and 2 alarms
    Clock c, c2;
    Alarm a, a2;

    // set the times
    c.set_hour(10);
    c.set_minute(1);

    c2.set_hour(10);
    c2.set_minute(48);

    a.set_hour(10);
    a.set_minute(1);
    a.set_alarm(6, 0);

    a2.set_hour(10);
    a2.set_minute(48);
    a.set_alarm(8, 30);

    // calls Clock output
    c.output();
    // calls Alarm output
    // if you get rid of the Alarm override, it will call the Clock version instead
    a.output();

    // Clock version
    c.is_equal(c2);
    // Alarm version
    a.is_equal(a2);
    // Which version? - Why does it work?
    c.is_equal(a);
    // Which version? - Why does it NOT work?
    a.is_equal(c);
}