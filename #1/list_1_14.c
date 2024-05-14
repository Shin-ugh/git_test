#include <stdio.h>

int main(void){
  int n1, n2;

  puts("enter 2 numbers:");
  scanf("%d",&n1 );
  scanf("%d",&n2 );

  int result = n1 + n2;

  printf("n1 + n2 = %d\n", result );
  return 0;
}
