class Clock{
    public:
        Clock();

        // accessors 
        int get_hour() const {return hour;}
        int get_minute() const {return minute;}

        void set_hour(int h) {hour = h;}
        void set_minute(int m) {minute = m;}

        // setw(2) field width of 2
        // setfill('0') fill extra space with '0' if necessary
        void output() const;

        bool is_equal(const Clock& other) const;

    // protected = data is private from the application (main program), but public for any descendant classes (children, grandchildren, etc)
    protected:
        int hour;
        int minute;
};


// Because of :public Clock, Alarm has all the characteristics of a Clock as well (member functions and data)
class Alarm:public Clock{
    public:
        Alarm();

        void set_alarm(int ah, int am);
        bool is_ringing() const;

        // overriding the output function - same function signature as in the Clock
        void output() const;

        // overloading the is_equal function - different signature from Clock
        bool is_equal(const Alarm& other) const;

    private:
        // hour and minute are inherited and directly accessible because of the protected keyword in Clock
        int alarm_h;
        int alarm_m;
};