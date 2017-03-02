#include <algorithm> // sort
#include <iostream>
#include <array>
#include <functional> // for greater<

struct {
  bool operator()(int a, int b){return a<b;}
} myLessCompare;

int main()
{
  std::string str_a = "literal312";
  std::array<int,10> a = {5,7,4,23,4,8,99,1,3,10};

  // sort by default operator '<'
  std::sort(a.begin(), a.end());

  // sort by std lib function
  std::sort(a.begin(), a.end(), std::greater<int>());

  // sort using a custom function object
  std::sort(a.begin(), a.end(), myLessCompare);

  for(auto &value : a)
    std::cout << value << " ";
  std::cout << std::endl;

  // sort a string
  std::sort(str_a.begin(), str_a.end(), std::greater<char>());
  std::cout << "str_a: " << str_a << std::endl;

  return 0;
}
