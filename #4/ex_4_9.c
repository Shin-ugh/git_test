#include<stdio.h>

int main(void){
  int number, i=0;

  puts("enter number:");
  scanf("%d", &number);

  while(i < number){
    if(i%2==0){
      printf("+");
    }
    else{
      printf("-");
    }
    i++;
  }
  putchar('\n');
}
