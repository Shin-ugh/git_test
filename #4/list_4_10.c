#include<stdio.h>

int main(void){
  int number, i = 0;
  int j= 1, k = 1;

  do{
    printf("enter number:"); scanf("%d", &number);
    if(number > 0){
      break;
    }
    printf("\aenter number > 0\n");
  }while(1);

  int number2;
  number2 = number;
  //printf("%d\n", number);

  while(j <= number2){
    j = j * 10;
    printf("%d", number%10);
    number = number/ 10;
    //printf("nuber: %d j : %d\n", number, j);
  }
  printf("\n");

}
