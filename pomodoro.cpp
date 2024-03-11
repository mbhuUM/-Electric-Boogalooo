#include "dependencies/pomodoro.h"
#include "dependencies/timer.h"

PomoDoro::PomoDoro(long _minutes, long _seconds, long _breakTime)
{
    minutes = _minutes;
    seconds = _seconds;
    breakTime = _breakTime;
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

void PomoDoro::setbreakTime(long _breakTime)
{
    breakTime = _breakTime;
}
long PomoDoro::getbreakTime()
{
    return breakTime;
}

void PomoDoro::setNumberOfRuns()
{
    numberOfRuns += 1;
}

int PomoDoro::getNumberOfRuns()
{
    return numberOfRuns;
}

void PomoDoro::startPomodoro(PomoDoro settings)
{
    int numLoops = 1;
    //TODO: change this so that it's savable in the future
    while(1)
    {

        //long break
        if(numLoops % 4 == 0)
        {
            //breakTime needs to be in seconds
            PomoDoro::longBreak(settings);
        }//if 
        
        //study time, odd runs
        else if(numLoops % 2 == 1)
        {

        } //else odd

        //even - mini breaks
        else
        {
            PomoDoro::shortBreak(settings);
        }
        numLoops++;

    }//while
    
}//void

void PomoDoro::longBreak(PomoDoro settings)
{
    startTimer(settings.getbreakTime() * 60);
    //might need to sleep here until music ends?
}

//hard code for 5 minutes rn
void PomoDoro::shortBreak(PomoDoro settings)
{
    startTimer(5 * 60);
}

void PomoDoro::studyTime(PomoDoro settings)
{
    long minutes = settings.getMinutes();
    long seconds = settings.getSeconds();
    long combined = minutes * 60 + seconds;
    startTimer(combined);
}



