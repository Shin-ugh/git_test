#include<stdio.h>

int main(void){
  int n1, n2, n3;

  puts("enter n1");
  scanf("%d", &n1);
  printf("%d %% 10 = %d\n", n1, n1 % 10);

  puts("enter n2, n3");
  scanf("%d", &n2);
  scanf("%d", &n3);
  printf("n2 / n3 = %d, n2 %% n3 = %d\n", n2 / n3, n2 % n3);

  return 0;
}
