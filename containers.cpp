

/*
 *check http://thispointer.com/c-11-unordered_set-basic-usage-example/
http://en.cppreference.com/w/cpp/container/unordered_map/operator_at
http://www.cplusplus.com/reference/map/map/begin/
http://www.cplusplus.com/reference/unordered_map/unordered_map/begin/
 * */

#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

int main(int argc, char *argv[]) {
  std::unordered_map<char, int> mymap {{'a',1}, {'b',2}};

  mymap['c'] = 3;

  for(const auto &pair : mymap) {
    std::cout << pair.first << " : " << pair.second << std::endl;
  }

  std::cout << "----------------------------------" << std::endl;

  for ( auto it = mymap.begin(); it != mymap.end(); ++it )
    std::cout << " " << it->first << ":" << it->second;
  std::cout << std::endl;
  
  return 0;
}
