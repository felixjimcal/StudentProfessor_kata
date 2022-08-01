#include <iostream>
#include <vector>

class UniversityMember {
public:
  virtual void setData() = 0;
  virtual void getData() const = 0;

protected:
  int age = 0;
  std::string name = "";
};

class Student : public UniversityMember {
public:
  void setData() {
    ID++;
    std::cin >> name >> age;
    double grade = 0;
    for (int i = 0; i < 10; i++) {
      std::cin >> grade;
      grades.push_back(grade);
      sumGrades += grade;
    }
    averageGrades = sumGrades / grades.size();
  }

  void getData() const {
    std::cout << ID << " " << name << " " << age << " " << sumGrades << " "
              << averageGrades << " (student)";
  }

private:
  static int ID;
  int sumGrades = 0, averageGrades = 0;
  std::vector<double> grades;
};
int Student::ID = 0;

class Professor : public UniversityMember {
public:
  void setData() { std::cin >> name >> age >> publications; }

  void getData() const {
    std::cout << ID << " " << name << " " << age << " " << publications << " (professor)";
  }

private:
  static int ID;
  int publications = 0;
};
int Professor::ID = 0;

int main() {
    /*
     * 2
     * 1
     * Walter 56 99
     * 2
     * Jesse 18 5.1 3 2.9 8.6 7 4 2.1 6 3.1 10
    */

  int n, val;
  std::cout<<"U members"<<std::endl;
  std::cin >> n;

  std::cout<<"type"<<std::endl;;
  UniversityMember *per[n];
  for (int i = 0; i < n; i++) {
    std::cin >> val;
    if (val == 1) {
      per[i] = new Professor;
    } else {
      per[i] = new Student;
    }
    per[i]->setData();
  }

  for (int i = 0; i < n; i++) {
    per[i]->getData();
  }

  /*
   * Expected output:
   * 1 Walter 56 99
   * 1 Jesse 18 51.8 5.18
   *
   */

  return 0;
}
