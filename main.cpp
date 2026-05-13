#include <iostream> // std::cout
#include <subprocess.h>

int main() {
  try {
    std::cout << "Hello, task_0001!\n";
    subprocess::run_1({"ls"});
    // FIXME
    return EXIT_SUCCESS;
  } catch (std::exception& exc) {
    std::cerr << "Exception caught: " << exc.what() << '\n';
  } catch (...) {
    std::cerr << "Unknown exception caught\n";
  }
  return EXIT_FAILURE;
}
