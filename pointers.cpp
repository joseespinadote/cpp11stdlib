#include<iostream>

int main() {
  // *void: puntero a un objeto de tipo desconocido
  int a = static_cast<int>(3.14);
  void* b = &a;
  int* c = static_cast<int*>(b);

  std::cout << "a: " << a << " *c: " << *c << std::endl;

  // error: ‘void*’ is not a pointer-to-object type:
  //std::cout << "b: " << *b << std::endl;
  
  // nullptr represents the null pointer
  int *d = nullptr;

  std::cout << "d: " << d << std::endl;

  // segmentation fault
  //std::cout << *d;

  if(d==nullptr)std::cout << "d points to null" << std::endl;
}
