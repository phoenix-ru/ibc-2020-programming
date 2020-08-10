#include <iostream>

// Ask question and collect answer
int readNumber() {
  // Ask question
  std::cout << "Please, enter a number: ";

  // Create variable for answer
  int userNumber = 0;

  // Put the answer into a variable
  std::cin >> userNumber;

  return userNumber;
}

int checkIfNumberIsPrime(int number) {
  if (number <= 0) {
    return -1;
  }

  if (number == 1) {
    return -2;
  }

  // Actual code: checking if number is prime
  for (int i = 2; i < number; i++) {
    // We found a divisor
    if (number % i == 0) {
      return false;
    }
  }

  // We couldn't find any divisors
  return true;
}

int main() {
  int number = readNumber();

  // boolean: 0 (false) 1 (true)
  int isPrime = checkIfNumberIsPrime(number);

  if (isPrime == true) {
    std::cout << "Number is prime\n";
  } else if (isPrime == false) {
    std::cout << "Number is not prime\n";
  } else if (isPrime == -1) {
    std::cout << "Number is not positive!\n";
  } else if (isPrime == -2) {
    std::cout << "Number one is neither prime nor compound!\n";
  }
}
