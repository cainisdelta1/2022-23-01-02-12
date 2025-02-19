//pointers to pointers
#include <iostream>

int main() {
  //declare and initialize an integer
  int i = 100;
  //declare an int pointer and take address of an int
  int * pi = &i;
  //declare a pointer to an int pointer and take the address of it
  int ** p_pi = &pi;

  if(pi && p_pi)
  {
    std::cout << "i = " << i << std::endl;
    std::cout << "Address of i is " << &i << std::endl;
    std::cout << "pi = " << pi << std::endl;
    std::cout << "&pi = " << &pi << std::endl;
    std::cout << "p_pi = " << p_pi << std::endl;
    std::cout << "&p_pi = " << &p_pi << std::endl;
  }
  
  return 0;
}