#ifndef CONSTRUCTOR_HPP
#define CONSTRUCTOR_HPP

#include <iostream>
#include <string>

class Student {
public:
  std::string name;
  int age;

  Student() : name("Nisarg"), age(21), roll(1) {
    std::cout << "Hello I'm " << name << std::endl;
  }

  void init_roll(int i_roll) { roll = i_roll; }
  int display_roll() { return roll; }

private:
  int roll;
};

#endif
