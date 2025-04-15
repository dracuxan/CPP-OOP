#include <iostream>
#include <string>
using namespace std;

class Teacher {
public:
  string name;
  string dept;

  void change_dept(string newDept) {
    dept = newDept;
    salary = 1000;
    cout << salary << endl;
  }

private:
  int salary;
};

int main() {
  Teacher t1;

  t1.name = "Nisarg";
  t1.dept = "Computers";
  std::cout << t1.name << endl;
  std::cout << t1.dept << endl;

  t1.change_dept("Arts");
  std::cout << "New dept: ";

  std::cout << t1.dept << endl;

  return 0;
}
