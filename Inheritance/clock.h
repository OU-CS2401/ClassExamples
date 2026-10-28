// Inheritance
#include <iostream>
#include <iomanip>


class Clock{
    public:
        Clock(int h = 1, int m = 0);

        void set_time(int h, int m);
        void advance(int amt = 1);

        int get_hour() const;
        int get_minute() const;

        void output() {
            std::cout << hour << ":" << std::setw(2) << std::setfill('0') << minute << std::endl;
        }

        bool is_equal(const Clock& other){
            return hour == other.hour && minute == other.minute;
        }

    protected:
        int hour;
        int minute;
};

class Alarm:public Clock{
    public:
        Alarm();

        void set_alarm(int h, int m);

        bool is_ringing(){return hour == alarm_h && minute == alarm_m;}

        // overriding 
        void output() {
            Clock::output();

            std::cout << alarm_h << ":" << std::setw(2) << std::setfill('0') << alarm_m << std::endl;
        }

        bool is_equal(const Alarm& other){
            return hour == other.hour && minute == other.minute && alarm_h == other.alarm_h && alarm_m == other.alarm_m;
        }

    private:
        int alarm_h;
        int alarm_m;
};