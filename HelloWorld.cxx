#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  
  if (argc < 2) {
    // report version
    std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
              << Tutorial_VERSION_MINOR << '\n';
    std::cout << "Usage: " << argv[0] << " number\n";
    return 1;
  }
}
