// Write a C program that asks the user to enter three numbers. Calculate and
// print the sum and the average of these numbers

#include <stdio.h>

int main(void) {
  // Variable declarations
  float a, b, c;
  float sum, average;

  // Handle user input
  printf("Enter three numbers below (floating points supported)\n");
  printf("a: ");
  scanf("%f", &a);
  printf("b: ");
  scanf("%f", &b);
  printf("c: ");
  scanf("%f", &c);

  // Calculate the sum of the numbers
  sum = a + b + c;

  // Calculate the average of the numbers
  average = (a + b + c) / 3;

  // Display the results
  printf("\nSum and average of %f, %f, %f given to 6d.p\n", a, b, c);
  printf("Sum = %.6f\n", sum);
  printf("Average = %.6f\n", average);

  return 0;
}