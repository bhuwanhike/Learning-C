#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  // Q.1 Program to dynamically create an array of size 6 capable of storing 6 integers.
  int s = 6;
  int* ptr = (int*) malloc(s* sizeof(int));

  // Q.2 Use array created previously to store 6 integers entered by the user.
  for(int i = 0; i<s; i++){
    printf("Enter ptr[%d]: ", i);
    scanf("%d", &ptr[i]);
  }

  // Q.3 Use calloc in problem 1 instead of malloc.
  int *ptr2 = (int*) calloc(s, sizeof(int));

  // Q.4 Create an array dynamically capable of storing 5 integers. Now use realloc so    that it can now store 10 integers.

  int a = 5;
  int* ptr3 = (int*) malloc(a * sizeof(int));
  printf("Before:\n");
  for(int i = 0; i<a; i++){
      printf("Enter ptr[%d]: ", i);
      scanf("%d", &ptr3[i]);
    }
  a = 10;
  ptr3 = (int*) realloc(ptr3, 10*sizeof(int));
  printf("After:\n");
  for(int i = 0; i<a; i++){
    printf("Enter ptr[%d]: ", i);
    scanf("%d", &ptr3[i]);
  }

}
