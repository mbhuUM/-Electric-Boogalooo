#include <iostream>
#include <chrono>

#ifndef pomoDoro

#define pomoDoro

class PomoDoro
{
    public:
        PomoDoro(long _minutes, long _seconds, int _untilLong);


    private:
        long minutes;
        long seconds;
        int untilLong;
};

#endif