#ifndef SUBPROCESS_H_
#define SUBPROCESS_H_

#include <future>
#include <string>
#include <tuple>
#include <vector>

class subprocess {
 public:
  // Start a process without capturing its output, verify exit code is success
  static void run_1(const std::vector<std::string>& args);

  // Start a process without capturing its output, return exit code
  static int run_2(const std::vector<std::string>& args);

  // Start a process and capture its output, return cout, cerr and exit code
  static std::tuple<std::string, std::string, int> run_3(
      const std::vector<std::string>& args);

  // Start a process and capture its output, return cout, cerr, verify exit
  // code is success
  static std::tuple<std::string, std::string> run_4(
      const std::vector<std::string>& args);

  // Start a detached process without capturing its output,
  // exit code saved in std::future
  // Note:
  //   since the process is detached, there is no need to log the execution time
  static std::future<int> run_5(const std::vector<std::string>& args);

  // Start a process without capturing its output
  // retry on failure 10 times, exponential backoff with 60 seconds maximum
  static void run_6(const std::vector<std::string>& args);
};

#endif // SUBPROCESS_H_
