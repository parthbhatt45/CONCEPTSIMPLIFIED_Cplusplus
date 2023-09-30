#include <iostream>
#include <string>

using namespace std;
struct Student {
  string name;
  int grade;
};
int main() {
  
  int n;
  Student students[50];
  int highest_grade = 0;
  int lowest_grade = 100;
  int sum_of_grade = 0;
  
  cout << "Enter the number of students: ";
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    cout << "Enter the name of student " << i + 1 << ": ";
    cin >> students[i].name;
    cout << "Enter the grade of student " << i + 1 << ": ";
    cin >> students[i].grade;

    if (students[i].grade > highest_grade) {
      highest_grade = students[i].grade;
    }
    if (students[i].grade < lowest_grade) {
      lowest_grade = students[i].grade;
    }
    sum_of_grade += students[i].grade;
  }
  
  float average_grade = (float)sum_of_grade / n;
  

  cout << "The average grade is " << average_grade << endl;
  cout << "The highest grade is " << highest_grade << endl;
  cout << "The lowest grade is " << lowest_grade << endl;
  return 0;
}