#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include "program.h"

int main(int argc, char * argv[]) {
  if (argc != 2) {
    printf("ERROR: I expected a string as a command-line argument.\n");
    exit(1);
  }

  int result = VIN_IsValid(argv[1]);
  if (result == 0) {
    printf("INVALID: \"%s\" is not a valid VIN.\n",argv[1]);
    exit(0);
  }
  if (result == 1) {
    printf("VALID: \"%s\" is a valid VIN.\n",argv[1]);
    exit(0);
  }
  if (result == -1) {
    printf("ERROR: The command-line argument was not of a proper length.\n");
  }
  else if (result == INT_MIN) {
    printf("ERROR: The program has unimplemented functionality.\n");
  }
  else {
    printf("ERROR: The program generated an unexpected return value: %d.\n",result);
  }
  exit(1);
}
