#include "dependencies/pomodoro.h"

PomoDoro::PomoDoro(long _minutes, long _seconds, int _untilLong)
{
    minutes = _minutes;
    seconds = _seconds;
    untilLong = _untilLong;
    numberOfRuns = 0;
}

void PomoDoro::setMinutes(long _minutes)
{
    minutes = _minutes;
}

long PomoDoro::getMinutes()
{
    return minutes;
}

void PomoDoro::setSeconds(long _seconds)
{
    seconds = _seconds;
}
long PomoDoro::getSeconds()
{
    return seconds;
}

void PomoDoro::setUntilLong(int _untilLong)
{
    untilLong = _untilLong;
}
int PomoDoro::getUntilLong()
{
    return untilLong;
}

void PomoDoro::setNumberOfRuns()
{
    numberOfRuns += 1;
}

int PomoDoro::getNumberOfRuns()
{
    return numberOfRuns;
}




