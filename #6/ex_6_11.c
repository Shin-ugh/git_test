#include<stdio.h>

#define NUMBER 10



int search_idx(const int v[], int idx_arr[], int key, int n){

  int i = 0;
  int idx = 0;
  while(1){
    if(v[i] == key){
      idx_arr[idx] = i;
      idx++;
    }
    else if(i == n){
      break;
    }
    i++;
  }
  return idx;
}

int main(void){
  int arr1[NUMBER] = {1, 3, 5, 3, 7, 9, 3, 2, 3, 3};
  int idx_arr[NUMBER];
  int key = 3;


  int number_of_idx = search_idx(arr1, idx_arr, key, NUMBER);
  printf("idx = %d\n", number_of_idx);

  printf("idx[NUMBER] = {");
  for(int i = 0; i<number_of_idx; i++){
    printf("%d, ", idx_arr[i]);
  }
  printf("}\n");
  return 0;
}
