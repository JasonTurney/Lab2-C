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
  double user = atof(grade);
    if (grade >= 93.0) {
    printf("Your letter grade for CMPSC 131 is A.");
  }
  if (grade >= 90.0 and grade < 93.0) {
    printf("Your letter grade for CMPSC 131 is A-.");
  }
  if (grade >= 87.0 and grade < 90.0) {
    printf("Your letter grade for CMPSC 131 is B+.");
  }
  if (grade >= 83.0 and grade < 87.0) {
    printf("Your letter grade for CMPSC 131 is B.");
  }
  if (grade >= 80.0 and grade < 83.0) {
    printf("Your letter grade for CMPSC 131 is B-.");
  }
  if (grade >= 77.0 and grade < 80.0) {
    printf("Your letter grade for CMPSC 131 is C+.");
  }
  if (grade >= 70.0 and grade < 77.0) {
    printf("Your letter grade for CMPSC 131 is C.");
  }
  if (grade >= 70.0 and grade < 60.0) {
    printf("Your letter grade for CMPSC 131 is D.");
  }
  if (grade < 60) {
    printf("Your letter grade for CMPSC 131 is F.");
  }
  return 0;
}