#include <stdio.h>

int main(void){
  int vx, vy;

  puts("enter 2 numbers");
  scanf("%d", &vx);
  scanf("%d", &vy);

  printf("vx + vy = %d\n", vx + vy);
  printf("vx - vy = %d\n", vx - vy);
  printf("vx * vy = %d\n", vx * vy);
  printf("vx / vy = %d\n", vx / vy);
  printf("vx %% vy = %d\n", vx % vy);

  return 0;

}
