#include<stdio.h>

int main(void){
  int n1, n2, n3, n4;

  puts("enter n1, n2");
  scanf("%d", &n1);
  scanf("%d", &n2);
  printf("%d is %d%% of %d\n", n1, (n1*100 / n2), n2);

  puts("enter n3, n4");
  scanf("%d", &n2);
  scanf("%d", &n3);
  printf("n2 + n3 = %d, n2 * n3 = %d\n", n2 + n3, n2 * n3);

  return 0;
}
