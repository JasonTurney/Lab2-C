// Author: Jason Turney jnt5211@psu.edu
// Collaborator:
// Collaborator:
// Collaborator:
// Section: 1
// Breakout: 12

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *user = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(user);
  if (grade >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A.");
  }
  else if (grade >= 90.0) {
    printf("Your letter grade for CMPSC 131 is A-.");
  }
  else if (grade >= 87.0) {
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  else if (grade >= 83.0) {
    printf("Your letter grade for CMPSC 131 is B.");
  }
  else if (grade >= 80.0) {
    printf("Your letter grade for CMPSC 131 is B-.");
  }
  else if (grade >= 77.0) {
    printf("Your letter grade for CMPSC 131 is C+.");
  }
  else if (grade >= 70.0) {
    printf("Your letter grade for CMPSC 131 is C.");
  }
  else if (grade >= 70.0) {
    printf("Your letter grade for CMPSC 131 is D.");
  }
  else {
    printf("Your letter grade for CMPSC 131 is F.");
  }

  return 0;
}