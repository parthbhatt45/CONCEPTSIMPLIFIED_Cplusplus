#include <iostream>
#include <ctime>

using namespace std;
int main() {
  
  srand(time(0));
  
  int random_number = 1 + (rand() % 100);
  
  int guess;
  int guesses = 0;
  do {
    cout << "Guess a number between 1 and 100: ";
    cin >> guess;
    guesses++;
    if (guess < random_number) {
      cout << "Your guess is too low.\n";
    } else if (guess > random_number) {
      cout << "Your guess is too high.\n";
    }
  } while (guess != random_number);
 
  cout << "Congratulations! You guessed the number in " << guesses << " guesses.\n";
  return 0;
}