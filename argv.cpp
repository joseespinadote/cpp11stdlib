#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
  std::cout << argv[0] << std::endl;
  std::string programName = std::string(argv[0]);
  std::cout << "str: " << programName << " the number of paramters is " << argc -1 << std::endl;
  return 0;
}
