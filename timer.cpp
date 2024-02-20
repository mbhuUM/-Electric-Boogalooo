#include "dependencies/timer.h"

//returns mm::ss
std::string properFormat(int value)
{
    std::string result;
  // compute h, m, s
  std::string h = std::to_string(value / 3600);
  std::string m = std::to_string((value % 3600) / 60);
  std::string s = std::to_string(value % 60);
  // add leading zero if needed
  std::string hh = std::string(2 - h.length(), '0') + h;
  std::string mm = std::string(2 - m.length(), '0') + m;
  std::string ss = std::string(2 - s.length(), '0') + s;
  // return mm:ss if hh is 00
  if (hh.compare("00") != 0) {
    result = hh + ':' + mm + ":" + ss;
  }
  else {
    result =  mm + ":" + ss;
  }
  return result;
} 


void startTimer(int durationInSeconds)
{
    // Convert seconds to a duration object
    std::chrono::seconds duration(durationInSeconds);
    std::chrono::seconds oneSec(1);
    

    std::cout << "Timer started for " << durationInSeconds << " seconds." << std::endl;

    // Wait for the time duration to pass
    // std::this_thread::sleep_for(duration);
    for(int i = 0; i < durationInSeconds; i++)
    {
        std::this_thread::sleep_for(oneSec);
        std::cout << "Time in Seconds: " << properFormat(i) << "\n";
    }
    // Timer expires
    std::this_thread::sleep_for(oneSec);
    std::cout << "Time in Seconds: " << properFormat(durationInSeconds) << "\n";
    std::cout << "Time's up!" << std::endl;
    //what if i makes this a thread, sleep it until this thread wakes up, then once this wakes up i call cv and switch to the other thread
    system("play music/driftveil.mp3");
}
