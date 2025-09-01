// Develop a C program that needs a student's marks and uses nested if
// statements to display: "Distinction" if marks >= 75, "Pass" if marks >= 50,
// "Fail" if marks < 50.

#include <stdio.h>

int main(void) {
  // Variable declarations
  int marks;

  // Get the marks from the user
  printf("Enter your marks: ");
  scanf("%d", &marks);

  // Display the result
  if (marks >= 75) {
    printf("Distinction\n");
  } else if (marks >= 50) {
    printf("Pass\n");
  } else {
    printf("Fail\n");
  }

  return 0;
}
