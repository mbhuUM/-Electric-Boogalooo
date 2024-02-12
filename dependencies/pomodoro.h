#include <iostream>
#include <chrono>

#ifndef pomoDoro

#define pomoDoro

class PomoDoro
{
    public:
        PomoDoro(long _minutes, long _seconds, int _untilLong);
        void setMinutes(long _minutes);
        long getMinutes();

        void setSeconds(long _seconds);
        long getSeconds();

        void setUntilLong(int _untilRests);
        int getUntilLong();

        void setNumberOfRuns();
        int getNumberOfRuns();

    private:
        int numberOfRuns;
        long minutes;
        long seconds;
        int untilLong;
};

#endif