#include <iostream>

// How many times do we need to print hello
int howManyTimes = 10;

// Put limit on how many times
const int LIMIT_HOW_MANY_TIMES = 25;

// Ask question and collect answer
int askHowManyTimes() {
  // Ask question
  std::cout << "How many times do you want to print 'Hello'? ";

  // Create variable for answer
  int howManyTimes = 0;

  // Put the answer into a variable
  std::cin >> howManyTimes;

  return howManyTimes;
}

// Print hello to cout
void printHello() {
  std::cout << "Hello!\n";
}

// Print hello if the answer is less than allowed limit
void printHelloIfNotTooMany() {
  // (guarding)
  // Check max limit
  if (howManyTimes > LIMIT_HOW_MANY_TIMES) {
    std::cout << "We don't want to print so many lines!\n";
    return;
  }

  // (guarding)
  // Check min limit
  if (howManyTimes < 0) {
    std::cout << "We can't print that!\n";
    return;
  }

  // Actual code
  for (int iterable = 0; iterable < howManyTimes; iterable++) {
    printHello();
  }
}

int main2() {
  howManyTimes = askHowManyTimes();

  printHelloIfNotTooMany();

  return 0;
}


