

/*
 *check http://thispointer.com/c-11-unordered_set-basic-usage-example/
http://en.cppreference.com/w/cpp/container/unordered_map/operator_at
http://www.cplusplus.com/reference/map/map/begin/
http://www.cplusplus.com/reference/unordered_map/unordered_map/begin/

Cpp containers

Properties explanations:
- Sequence
    Elements in sequence containers are ordered in a strict linear sequence. Individual elements are accessed by their
    position in this sequence.
- Contiguous storage
    The elements are stored in contiguous memory locations, allowing constant time random access to elements. Pointers
    to an element can be offset to access other elements.
- Fixed-size aggregate
    The container uses implicit constructors and destructors to allocate the required space statically. Its size is compile-time
    constant. No memory or time overhead.

 * */

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <unordered_map>

std::array<int, 5> staticArray; // static, implies zero-initialized --> {0,0,0,0,0}

int main(int argc, char *argv[]) {

  // Arrays: Arrays are fixed-size sequence containers: they hold a
  // specific number of elements ordered in a strict linear sequence.
  // Properties:
  // - Sequence
  // - Contiguous storage
  // - Fixed-size aggregate
  // ref: http://www.cplusplus.com/reference/array/array/
  std::cout << std::endl;
  std::cout << "== array == " << std::endl;
  std::array<int, 5> firstArray = {76,5,23,5,1};
  std::array<int, 5> secondArray = {6,53,3,51,31};
  std::array<int, 5> thirdArray; // unitialized --> {?,?,?,?,?}

  std::cout << "firstArray: ";
  for(auto value : firstArray)
    std::cout << value << " ";
  std::cout << " (" << firstArray.size() << " elements)" << std::endl;

  std::cout << "secondArray: ";
  for(auto value : secondArray)
    std::cout << value << " ";
  std::cout << " (" << secondArray.size() << " elements)" << std::endl;

  std::cout << "firstArray.swap(secondArray);" << std::endl;
  firstArray.swap(secondArray);

  std::cout << "firstArray: ";
  for(auto value : firstArray)
    std::cout << value << " ";
  std::cout << std::endl;

  std::cout << "secondArray: ";
  for(auto value : secondArray)
    std::cout << value << " ";
  std::cout << std::endl;

  thirdArray.fill(5);
  std::cout << "thirdArray: ";
  for(auto value : thirdArray)
    std::cout << value << " ";
  std::cout << std::endl;

  std::cout << "staticArray: ";
  for(auto value : staticArray)
    std::cout << value << " ";
  std::cout << std::endl;

  std::array<int, 5> copiedArray = thirdArray;
  std::cout << "copiedArray (from thirdArray): ";
  for(auto value : copiedArray)
    std::cout << value << " ";
  std::cout << std::endl;

  // Deque: Double-ended queues are sequence containers with dynamic sizes
  // that can be expanded or contracted on both ends
  // Properties:
  // - Sequence
  // - Dynamic array
  // - Allocator-aware
  std::cout << std::endl;
  std::cout << "== deque ==" << std::endl;
  std::deque<int> mydeque;

  mydeque.push_back(1);
  mydeque.push_front(9);
  mydeque.push_back(2);
  mydeque.push_front(8);

  std::cout << "mydeque: ";
  for(auto value : mydeque)
    std::cout << value << " ";
  std::cout << std::endl;
  std::cout << "mydeque: (using iterators)";
  for (std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << std::endl;

  // Unordered map: 
  std::cout << std::endl;
  std::cout << "== unordered map ==" << std::endl;
  std::unordered_map<char, int> mymap {{'a',1}, {'b',2}};
  mymap['c'] = 3;
  mymap['c'] = 4; // overwrites old 'c'
  mymap['d'] = 3;
  mymap['e'] = 3;
  std::cout << "mymap: ";
  for(const auto &pair : mymap)
    std::cout << pair.first << ":" << pair.second << " ";
  std::cout << std::endl;
  std::cout << "mymap: (using iterators)";
  for (auto it = mymap.begin(); it != mymap.end(); ++it )
    std::cout << " " << it->first << ":" << it->second << " ";
  std::cout << std::endl;
  
  // Vector
  // http://en.cppreference.com/w/cpp/container/vector

  return 0;
}
