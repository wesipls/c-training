#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {
  system("clear");
  int j = 0;
  int i = 0;
  while(i < 50) {
    for(i = j; i < 50; i++) {
    printf("-");
    }
    printf("WEE\n");
    j = j + 1;
    i = j;
    usleep(200000);
    system("clear");
  }
}
