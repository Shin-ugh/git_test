#include<stdio.h>

int str_length(char *s){
  int i = 0;
  while(*(s+i)){
    i++;
  }
  return i;
}

int main(void){
  char *str = "abcdefg";

  int length = str_length(str);

  printf("the length of str is %d\n", length);

  return 0;
}
