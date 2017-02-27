#include<iostream>
int main() {
  // suffix U explicit unsigned
  auto a = 3U;
  // suffix L explicit long
  auto b = 3L;
  // suffix LL explicit long long
  // suffix F explicit float

  std::cout << "a: " << a << " " << "b: " << b << std::endl;

  // sizes are 'implementation defined' (google it)
  std::cout << "size of bool: " << sizeof(bool) << " " << sizeof(char) << " " << sizeof(short) << " " << sizeof(int) << " " << sizeof(long) << " " << sizeof(long long) << std::endl;

  // volatile is needed if you are reading from a spot in memory that, say, a completely separate process/device/whatever may write to
  volatile int c = -1;

  // references
  auto &d = a;
  d = 1;
  std::cout << "a: " << a << " d: " << d << std::endl;

  // decltype: declaration type specifier: decltype(expr) is the declared type of expr
  // no example yet

  return 0;
}
