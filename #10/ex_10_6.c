#include<stdio.h>

#define NUMBER 5

void change(int *x, int *y){
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void bsort(int a[], int n){
  int i, j;
  int *tmp;
  for(i = 0; i < n-1; i++){
    for(j = i+1; j < n; j++){
      if(a[i] > a[j]){
        change(&a[i], &a[j]);
      }
    }
  }
}

int main(void){
  int i;
  int point[NUMBER];

  printf("enter %d people score\n", NUMBER);
  for(i = 0; i < NUMBER; i++){
    printf("#%d: ", i);
    scanf("%d",&point[i]);
  }

  bsort(point, NUMBER);

  for(i = 0; i < NUMBER; i++){
    printf("#%d: %d\n", i, point[i]);
  }

  return 0;
}
