#include <iostream>

using namespace std;
int main() {
  // Declare variables.
  int number1, number2;
  char operator_;
  // Get the two numbers and the operator from the user.
  cout << "Enter the first number: ";
  cin >> number1;
  cout << "Enter the second number: ";
  cin >> number2;
  cout << "Enter the operator (+, -, *, /): ";
  cin >> operator_;
  // Switch statement to perform the operation.
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