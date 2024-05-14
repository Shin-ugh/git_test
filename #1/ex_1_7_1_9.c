#include <stdio.h>

int main(void){
  puts("天");
  puts("地");
  puts("人");

  int n1, n2, n3 = 0;

  puts("enter 2 numbers");
  scanf("%d", &n1);
  scanf("%d", &n2);
  printf("n1 * n2 = %d\n", n1 * n2);

  puts("enter 3 numbers");
  scanf("%d", &n1 );
  scanf("%d", &n2 );
  scanf("%d", &n3 );
  printf("n1 + n2 + n3 = %d \n", n1 + n2 + n3);

  return 0;

}
