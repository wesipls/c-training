#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

// I figured this had to be possible to do quite easily after creating rope.c
// so here we are, a silly litte wee woo rope thing
// i don't think it has any use, except for understanding how to "reverse" loops
// technically not really reverse it, just run the prograrm and you get what i mean

int main() {
  while(1) {
    system("clear");
    int j = 0;
    int i = 0;
    int k = 49;
    int l = 49;
    while(i < 50) {
      for(i = j; i < 50; i++) {
        printf("-");
      }
      printf("WEE\n");
      j = j + 1;
      i = j;
      usleep(20000);
      system("clear");
    }
    while(k > 0) {
      for(k = l; k < 50; k++) {
        printf("-");
      }
      printf("WOO\n");
      l = l - 1;
      k = l;
      usleep(20000);
      system("clear");
    }
  }
}
