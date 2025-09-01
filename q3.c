// Write a C program that reads an integer from the user and determines whether
// it is even odd and display the result.

#include <stdio.h>

int main(void) {
  // declare variable
  int num;

  // get the integer from the user
  printf("Enter an integer: ");
  scanf("%d", &num);

  // determine if the number is odd/even and responds accordingly
  if (num % 2 == 0) {
    printf("The number %d is even!\n", num);
  } else {
    printf("The number %d is odd!\n", num);
  }

  return 0;
}