#include<stdio.h>

#define STUDENT 5

int student_arr[STUDENT];

int top(void){

  int top_student = 0;
  for(int i = 0; i < STUDENT ; i++){
    if(top_student < student_arr[i]){
            top_student =  student_arr[i];
    }
  }

  return top_student;
}

int main(void){
  puts("enter 5 student's score");

  for(int i = 0; i < STUDENT; i++){
    printf("#%d = ", i);  scanf("%d", &student_arr[i]);
  }

  printf("top score is %d", top());

  return 0;

}
