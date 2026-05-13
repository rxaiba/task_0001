#include <subprocess.h>

void subprocess::run_1(const std::vector<std::string>& args) {
  (void)args;
  // FIXME
}

int subprocess::run_2(const std::vector<std::string>& args) {
  (void)args;
  // FIXME
  return -1;
}

std::tuple<std::string, std::string, int> subprocess::run_3(
      const std::vector<std::string>& args) {
  (void)args;
  // FIXME
  return {"", "", -1};
}

std::tuple<std::string, std::string> subprocess::run_4(
      const std::vector<std::string>& args) {
  (void)args;
  // FIXME
  return {"", ""};
}

std::future<int> subprocess::run_5(const std::vector<std::string>& args) {
  (void)args;
  // FIXME
  return std::async(std::launch::async, []() { return -1; });
}

void subprocess::run_6(const std::vector<std::string>& args) {
  (void)args;
  // FIXME
}
