//要素数がnであるintの配列v2の並びを反転したものを配列v1に格納

#define NUMBER 5
#include <stdio.h>


void intary_rcpy(const int v1[], int v2[], int n){
  for(int i = 0; i < n; i++){
    v2[i] = v1[n-i-1];
  }
}

int main(void){
  int const arr1[NUMBER] = {1, 2, 3, 4, 5};
  int arr2[NUMBER];

  intary_rcpy(arr1, arr2, NUMBER);

  for(int i = 0; i < NUMBER; i++){
    printf("arr1[%d] = %d   ", i, arr1[i]);
    printf("arr2[%d] = %d\n", i, arr2[i]);
  }
  return 0;
}
