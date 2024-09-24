#include <stdio.h>
#include <string.h>

//A more complicated calculator because you don't learn by not doing
//New features include error handling for user input
//Getting the numbers and the operator is done in functions, this really has not functional reason (hehe), but rather done to get used to functions.
//In short there is alot of useless redundancy here, but its a good learning opportunity, and probably a little easier to extend with functions already created.

//NOTE TO SELF: try avoind using scanf, as some smartass said on the internet, if you need to clear user input buffer you have already lost
//Regardless we probably have to do so in the while loop to give the users a new chance
//To do so we can use: while ((getchar()) != '\n'); 

//Function to get and verify integers for calculation, returns integer to use in calculation
double intVerifier();
//Function to get and verify operator to use, returns operator to use
char operatorOperator();

int main () {

//Declare variables for numbers and operators, numOne (+-*/) NumTwo = result;
  double numOne;
  double numTwo;
  char operator;

//Getting the integers and operators to use
//numOne
  printf("Simple and silly calculator created in C\n");
	printf("Please pick first number? ");
  numOne = intVerifier();

//operator
  printf("Pick operator? +, -, *, /");
  operator = operatorOperator();

//numTwo
  printf("Please pick second number? ");
  numTwo = intVerifier();

//Running calculations
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

//Definiton of intVerifier, accepts one integer which is verified and then returned
double intVerifier() {

//Declaring required variables, intCheck verifies that input is integer, goodCalc is returned if integer is accepted
  double calcNum;
  int intCheck;
  double goodCalc;

//Get and verify calcNum
  while (intCheck != 1) {
		intCheck=scanf("%lf", &calcNum);
//If scanf input is an int it will return 1, otherwise it will return 0
		if (intCheck==1) {
			printf("Nice job, %.1lf is definitely a number!\n", calcNum);
      goodCalc = calcNum;
      while ((getchar()) != '\n');
//If firstNum is not an integer, clear out input buffer and return to beginning
		} else {
			printf("Very close, but thats not a number, lets try again\n");
			while ((getchar()) != '\n');
		}
	}
//Return the accepted integer
  intCheck = 0;
  return goodCalc;
}

//Definition of operatorOperator, accepts one character verifies and returns 
char operatorOperator(){

//Declare variable for input, verification integer and return character
  char inop;
  int charCheck;
  char goodChar;

//While loop  to verify if user input is an accepted operator
  while (charCheck != 1) {
    scanf(" %c", &inop);
    if (inop == '+' || inop == '-' || inop == '*' || inop == '/') {
      printf("Nice job, %c is an accepted operator\n", inop);
      charCheck = 1;
      goodChar = inop;
      while ((getchar()) != '\n');
    } else {
      printf("Very close, but thats not an accepted operator, lets try again\n");
      while ((getchar()) != '\n');
    }
  }
  charCheck = 0; //Resetting this to reduce headaches in case this operation needs to be run multiple times in the future
  return goodChar;
}
