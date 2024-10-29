class Clock{
    public:
        Clock();

        void set_time(int h, int m);
        void advance(int amt = 1);

        int get_hour() const {return hour;}
        int get_minute() const {return minute;}

        void output() const {cout << hour << ":" << setw(2) << setfill('0') << minute << endl;}

        bool is_equal(const Clock& other) {return hour == other.hour && minute == other.minute;}

    protected:
        int hour;
        int minute;
};


class Alarm:public Clock{
    public:
        Alarm();

        void set_alarm(int h, int m);
        bool is_ringing();

        void output() const;   

        bool is_equal(const Alarm& other);     

    private:
        int alarm_h;
        int alarm_m;
};

void Alarm::output() const{
    Clock::output();
    cout << "Alarm time: " << alarm_h << ":" << setw(2) << setfill('0') << alarm_m << endl;
}

bool Alarm::is_ringing(){
    return hour == alarm_h && minute == alarm_m;
}

bool Alarm::is_equal(const Alarm& other){
    return Clock::is_equal(other) && alarm_h == other.alarm_h && alarm_m == other.alarm_m;
}