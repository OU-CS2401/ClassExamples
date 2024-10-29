int main(){
    Clock c, c2;
    c.set_time(12, 19);
    c.advance(); // move up by 1 minute
    c.advance(5); // move up by 5 minutes
    c.output();

    Alarm a, a2;
    a.set_time(12, 25);
    a.set_alarm(5, 0);
    a.output();

    c.is_equal(c2);
    c.is_equal(a);
    a.is_equal(a2);
    a.is_equal(c);
}