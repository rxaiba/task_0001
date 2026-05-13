#include <iostream> // std::cout

int main() {
  try {
    std::cout << "Hello, task_0001!\n";
    return EXIT_SUCCESS;
  } catch (std::exception& exc) {
    std::cerr << "Exception caught: " << exc.what() << '\n';
  } catch (...) {
    std::cerr << "Unknown exception caught\n";
  }
  return EXIT_FAILURE;
}
