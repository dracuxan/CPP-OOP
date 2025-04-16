#include "constructor.hpp"
#include <iostream>

int main() {
  Student s1;
  std::cout << "Before:" << std::endl;
  std::cout << s1.name << std::endl;
  std::cout << s1.age << std::endl;
  std::cout << s1.display_roll() << std::endl;

  s1.name = "nisarg";
  s1.age = 20;
  s1.init_roll(19);

  std::cout << "After:" << std::endl;
  std::cout << s1.name << std::endl;
  std::cout << s1.age << std::endl;
  std::cout << s1.display_roll() << std::endl;
}
