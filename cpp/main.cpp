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
    Student(){
        id = ++studentID;
    }
  void setData() {
    std::cin >> name >> age;

    grades.clear();
    double grade = 0;
    for (int i = 0; i < 10; i++) {
      std::cin >> grade;
      grades.push_back(grade);
      sumGrades += grade;
    }
    averageGrades = sumGrades / grades.size();
  }

  void getData() const {
    std::cout << id << " " << name << " " << age << " " << sumGrades << " "
              << averageGrades << " (student)";
  }

private:
  int id;
  static int studentID;
  double sumGrades = 0, averageGrades = 0;
  std::vector<double> grades;
};
int Student::studentID = 0;

class Professor : public UniversityMember {
public:
    Professor(){
        id = ++professorID;
    }
  void setData() { std::cin >> name >> age >> publications; }

  void getData() const {
    std::cout << id << " " << name << " " << age << " " << publications << " (professor)";
  }

private:
  int id = 0;
  static int professorID;
  int publications = 0;
};
int Professor::professorID = 0;

int main() {
    /*
     4
     1
     Walter 56 99
     2
     Jesse 18 5.1 3 2.9 8.6 7 4 2.1 6 3.1 10
     2
     Felix 29 5.1 3 2.9 8.6 7 4 2.1 6 3.1 4
     1
     Waldo 80 20
    */

  int n, val;
  std::cin >> n;

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
    std::cout<<""<<std::endl;
  }

  /*
   * Expected output:
    1 Walter 56 99 (professor)
    1 Jesse 18 51.8 5.18 (student)
    2 Felix 29 45.8 4.58 (student)
    2 Waldo 80 20 (professor)
   */

  return 0;
}
