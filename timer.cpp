#include "timer.h"

void startTimer(int durationInSeconds) {
    // Convert seconds to a duration object
    std::chrono::seconds duration(durationInSeconds);

    std::cout << "Timer started for " << durationInSeconds << " seconds." << std::endl;

    // Wait for the time duration to pass
    std::this_thread::sleep_for(duration);

    // Timer expires
    std::cout << "Time's up!" << std::endl;
    //what if i makes this a thread, sleep it until this thread wakes up, then once this wakes up i call cv and switch to the other thread
    system("play music/driftveil.mp3");
}
