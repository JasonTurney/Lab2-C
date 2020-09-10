// Author: Jason Turney jnt5211@psu.edu
// Collaborator: Timothy Zeng txz5165@psu.edu
// Collaborator: Jeremy Bell
// Collaborator: Ishan Behoora
// Section: 6
// Breakout: 6

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *user = readline("Enter your CMPSC 131 grade: ");
  double grade = atof(user);
  char *letter;
  if (grade >= 93.0) {
    letter = "A";
  }
  else if (grade >= 90.0) {
    letter = "A-";
  }
  else if (grade >= 87.0) {
    letter = "B+";
  }
  else if (grade >= 83.0) {
    letter = "B";
  }
  else if (grade >= 80.0) {
    letter = "B-";
  }
  else if (grade >= 77.0) {
    letter = "C+";
  }
  else if (grade >= 70.0) {
    letter = "C";
  }
  else if (grade >= 60.0) {
    letter = "D";
  }
  else {
    letter = "F";
  }
  printf("Your letter grade for CMPSC 131 is %s.\n", letter);
  return 0;
}