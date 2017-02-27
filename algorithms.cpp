#include<algorithm>
#include<iostream>

int main()
{
  std::array<int,10> a = {5,7,4,23,4,8,99,1,3,10};
  // sort by default operator '<'
  std::sort(a.begin(), a.end());
  // sort by std lib function
  std::sort(a.begin(), a.end(), std::greater<int>());
  // sort using a custom function object

  struct {
    bool operator()(int a, int b){return a<b;}
  } myLessCompare;

  std::sort(a.begin(), a.end(), myLessCompare);

  for(auto &value : a)
    std::cout << value << " ";
  std::cout << std::endl;

  return 0;
}
