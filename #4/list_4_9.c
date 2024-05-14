#include<stdio.h>

int main(void){
  int number, length, i, sum;

  puts("enter length");
  scanf("%d", &length);

  i = 0;
  sum = 0;
  int arr[length];

  while(i < length){
    printf("NO%d =", i +1); scanf("%d", &number);
    sum += number;
    i++;
  }

  printf("Sum = %d  Avarage = %f",sum, (double)sum/length );
}
