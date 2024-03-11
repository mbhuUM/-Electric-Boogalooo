#include <iostream>
#include <chrono>

#ifndef pomoDoro

#define pomoDoro

class PomoDoro
{
    public:
        PomoDoro(long _minutes, long _seconds, long _breakTime);
        void setMinutes(long _minutes);
        long getMinutes();

        void setSeconds(long _seconds);
        long getSeconds();

        void setbreakTime(long _breakTime);
        long getbreakTime();

        void setNumberOfRuns();
        int getNumberOfRuns();

        void startPomodoro(PomoDoro settings);
        void longBreak(PomoDoro settings);
        void shortBreak(PomoDoro settings);
        void studyTime(PomoDoro settings);

    private:
        int numberOfRuns;
        long minutes;
        long seconds;
        int breakTime;
};

#endif