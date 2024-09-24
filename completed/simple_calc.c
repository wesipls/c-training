//We all knew this was coming

#include <stdio.h>

int main() {

//declare variables
char operator;
double numOne, numTwo;

//Get first number
printf("First number: ");
scanf("%lf", &numOne);

//Get operator
printf("Operator (+, -, *, /): ");
scanf(" %c", &operator);

//Get second number
printf("Second number: ");
scanf("%lf", &numTwo);

  switch (operator) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", numOne, numTwo, numOne + numTwo);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", numOne, numTwo, numOne - numTwo);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", numOne, numTwo, numOne * numTwo);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", numOne, numTwo, numOne / numTwo);
      break;
    // In case of faulty operator
    default:
        printf("Unsupported operator");
}
return 0;
}
