#include<stdio.h>

int main(void){

  int a, b;

  puts("enter two numbers");

  scanf("%d", &a);
  scanf("%d", &b);

  if(a % b){
    puts("NOT Yakusu");
  }
  else{
    puts("YES Yakusu");
  }

  return 0;
}
