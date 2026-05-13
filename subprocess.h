#include <future>
#include <vector>

class subprocess {
 public:
  // Start a process without capturing it's output, verify exit code is success
  static void run_1(const std::vector<std::string>& args);

  // Start a process without capturing it's output, return exit code
  static int run_2(const std::vector<std::string>& args);

  // Start a process and capture it's output, return cout, cerr and exit code
  static std::tuple<std::string, std::string, int> run_3(
      const std::vector<std::string>& args);

  // Start a process and capture it's output, return cout, cerr, verify exit
  // code is success
  static std::tuple<std::string, std::string> run_4(
      const std::vector<std::string>& args);

  // Start a detached process without capturing it's output,
  // exit code saved in std::future
  static std::future<int> run_5(const std::vector<std::string>& args);

  // Start a process without capturing it's output
  // retry on failure 10 times, exponential backoff with 60 seconds maximum
  static void run_6(const std::vector<std::string>& args);
};
