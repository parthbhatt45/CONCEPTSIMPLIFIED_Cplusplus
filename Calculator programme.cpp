#include <iostream>

using namespace std;
int main() {
 
  int number1, number2;
  char operator_;
  
  cout << "Enter the first number: ";
  cin >> number1;
  cout << "Enter the second number: ";
  cin >> number2;
  cout << "Enter the operator (+, -, *, /): ";
  cin >> operator_;
  
  switch (operator_) {
    case '+':
      cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
      break;
    case '-':
      cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
      break;
    case '*':
      cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
      break;
    case '/':
      cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
      break;
    default:
      cout << "Incorrect operator." << endl;
  }
  return 0;
}