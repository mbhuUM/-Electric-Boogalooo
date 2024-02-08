#include <iostream>
#include <chrono>
#include <thread>
#include "pomodoro.h"
#include "timer.h"



int main()
{
  int timeInSeconds;
  std::cout << "Enter time in seconds for the timer: ";
  std::cin >> timeInSeconds;

  // Start the timer
  startTimer(timeInSeconds);


  return 0;  
}
