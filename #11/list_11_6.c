#include<stdio.h>

void str_copy(char *d, char *s){
  int i;
  /*while(*(d + i)){
    *(d + i) = *(s + i);
    i++;
  }*/

  while(d[i]){
    d[i] = s[i];
    i++;
  }
}

int main(void){
  char *str = "abcde";
  char *dir = "wxyz";

  printf("dir = %s\n", str);

  str_copy(dir,str );

  printf("dir = %s\n", str);
  return 0;
}
