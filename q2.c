// question: Write a C program that prompts the user to enter two integers.
// The program should compute and display: their sum, difference and product.

#include <stdio.h>

int main(void) {
  // Variable declaration:
  int a, b;
  int sum, difference, product;

  // Get a
  printf("Enter an integer a: ");
  scanf("%d", &a);

  // Get b
  printf("Enter an integer b: ");
  scanf("%d", &b);

  // Compute sum of a and b
  sum = a + b;

  // Compute the difference of a and b
  difference = a - b;

  // Compute the product of a and b
  product = a * b;

  // Prints out the results
  printf("\n-~-~-~-~-~-~-~-~-~-~-~-~-~-\n\n");
  printf("a 3[0m \t b = %d\n", a, b);
  printf("\n-~-~-~-~-~-~-~-~-~-~-~-~-~-\n\n");
  printf("Sum (a\+ b): %d\n", sum);
  printf("Difference (a\- b): %d\n", difference);
  printf("Product (a\* b): %d\n", product);

  return 0;
}