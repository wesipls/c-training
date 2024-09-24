//ROCK PAPER SCISSOR

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "validation/input_validator.h"

int main() {

//Declare variables
  int opp;
  int user;
  int wincount;
  int wintotal;
  
  while (wintotal < 50) {
//Seed random generator
    srand(time(NULL));

//Give opponent a "weapon"
    opp = rand() % (3 + 1 - 1) + 1;

//Get player "weapon"
    printf("pick a weapon: 1 for ROCK / 2 for PAPER / 3 for SCISSOR\n");
// I just wanted to try out header files, so we have a little validator here
    user = input_validator(0,4);
    wincount = 0;
    if (user == 1 && opp == 2) {
      printf("Your pick: ROCK, Computer pick: PAPER\n");
      printf("You got rekt my dude\n");
    } else if (user == 1 && opp == 3) {
      wincount = 1;
      printf("Your pick: ROCK, Computer pick: SCISSOR\n");
      printf("You rekt the computer\n");
    } else if (user == 2 && opp == 1) {
      wincount = 1;
      printf("Your pick: PAPER, Computer pick: ROCK\n");
      printf("You rekt the computer\n");
    } else if (user == 2 && opp == 3) {
      printf("Your pick: PAPER, Computer pick: SCISSOR\n");
      printf("You got rekt my dude\n");
    } else if (user == 3 && opp == 1) {
      printf("Your pick: SCISSOR, Computer pick: ROCK\n");
      printf("You got rekt my dude\n");
    } else if (user == 3 && opp == 2) {
      wincount = 1;
      printf("Your pick: SCISSOR, Computer pick: PAPER\n");
      printf("You rekt the computer\n");
    } else {
      printf("THIS A DRAW OR BROKEN, PROBABLY DRAW\n");
    }
    wintotal += wincount;
    printf("TOTAL WINS: %d", wintotal);
    printf("\n");
    }
      printf("Take a break.. you have won %d times\n", wintotal);
}
