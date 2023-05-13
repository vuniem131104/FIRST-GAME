#ifndef timer_h
#define timer_h

class Timer{
    public:
    Timer();
    ~Timer();
    void start();
    int get_ticks();
    bool is_start();
    private:
    int start_tick_;
    int paused_tick_;
    bool is_paused_;
    bool is_started_;
};

#endif 