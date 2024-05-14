#include<stdio.h>

#define NUMBER 100

void set_idx(int *v, int n){
  int i;
  for(i = 0; i < n; i++){
    *(v+i) = i;
  }
}

int main(void){
  int arr[NUMBER];

  set_idx(arr, NUMBER);

  for(int i = 0; i < NUMBER; i++){
    printf("arr[%d] : %d\n", i, *(arr + i));
  }

  return 0;
}
