#include<stdio.h>
#include<stdlib.h>

// Q.2 Passing a pointer j to a function and printing its address.
void print_address(int* j){
  printf("%d\n", j);
  printf("%d", *j);
}

// Q.3 Program to change the value of a variable to ten times of its current value using pass by reference.
void change_value(int* k){
  *k = 10 * (*k);
}

// Q.4 Function to calculate the sum and average of two numbers using pointers.
int* sum(int a, int b){
  int c = a+b;
  int * ptr = &c;
  return ptr;
}
float* avg(int a, int b){
  float c = (a+b)/2.0;
  float * ptr = &c;
  return ptr;
}

int main(){
  // Q.1 address and value of a variable using a pointer.
  int a = 5;
  int* j = &a;
  printf("%p\n", j);
  printf("%d", *j);

  // Q.2 Printing the address of a variable i.
  int i = 5;
  int* j = &i;
  printf("%d\n", j);
  print_address(j);

  // Q.3 
  int i = 5;
  printf("value before change: %d\n", i);
  change_value(&i);
  printf("value after change: %d\n", i);

  // Q.4 Printing the address of sum and avg functions;
  int a = 5, b = 4;
  int* ptr1 = sum(a, b);
  float* ptr2 = avg(a, b);
  printf("%p\n", ptr1);
  printf("%p\n", ptr2);

  // Q.5 Program to print the value of a variable i by using "pointer to poinnter" type of variable.
  int i = 5;
  int* j = &i;
  int** k = &j;
  printf("%d", **k);

}
