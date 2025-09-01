// Question: Write a C program that asks the user to enter their name and age,
// then prints your name, age.

#include <stdio.h>

int main(void) {
  // Get user's name
  char name[20];
  printf("Enter your name: ");
  scanf("%19s", name);

  // Get user's age
  int age;
  printf("Enter your age: ");
  scanf("%d", &age);

  // Print out user's information
  printf("You are %s, you are %d years old\n", name, age);

  return 0;
}
