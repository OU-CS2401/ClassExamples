#include "clock.h"

int main(){
    Clock c, c2;
    Alarm a, a2;
    c.set_time(11, 56);
    c.advance();
    c.output();
    c.set_alarm(6, 0);

    a.set_time(11, 59);
    a.set_alarm(6, 0);
    a.advance();
    a.output();
    
    // comparing objects
    c.is_equal(c2); // Clock::is_equal
    a.is_equal(a2); // Alarm::is_equal
    c.is_equal(a);  // Clock::is_equal
    a.is_equal(c);  // Alarm::is_equal

    /*
        Can pass a child where a parent is expected, but not the other way around 
    */

    c = a; // Clock = with slicing
    a = c; // Alarm =
}