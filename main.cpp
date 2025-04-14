#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
  string name;
  string dept;

  void change_dept(string newDept) { dept = newDept; }
};

int main() {
  Teacher t1;

  t1.name = "Nisarg";
  std::cout << t1.name << endl;

  return 0;
}
