#include <stdio.h>
#include <stdlib.h>
#include "input_validator.h"

int input_validator(int min, int max) {
    int input_number;
    int checker;
    int return_number;

    while (checker != 1) {
      checker=scanf("%d", &input_number);
      if (checker == 1 && input_number > min && input_number < max) {
        return_number = input_number;
        while ((getchar()) != '\n');
      } else {
        printf("Not a valid choice\n");
        checker = 0;
        while ((getchar()) != '\n');
      }
    }
    checker = 0;
    return return_number;
}

