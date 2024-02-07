#include <iostream>
#include <chrono>
#include <thread>

void startTimer(int durationInSeconds) {
    // Convert seconds to a duration object
    std::chrono::seconds duration(durationInSeconds);

    std::cout << "Timer started for " << durationInSeconds << " seconds." << std::endl;

    // Wait for the time duration to pass
    std::this_thread::sleep_for(duration);

    // Timer expires
    std::cout << "Time's up!" << std::endl;
}



int main()
{
  int timeInSeconds;
  std::cout << "Enter time in seconds for the timer: ";
  std::cin >> timeInSeconds;

  // Start the timer
  startTimer(timeInSeconds);

  return 0;  
}
