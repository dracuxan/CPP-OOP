#include <iostream>

int main() {
  char num[100];
  std::cout << "Enter your name: ";
  std::cin >> num;
  std::cout << "Hello " << num << "!" << std::endl;

  int score = 100;
  int &ptt = score;
  ptt = 1;

  std::cout << &ptt;

  return 0;
}
