#include<stdio.h>
#include<stdlib.h>

// Q.2 Using a function to reverse an array passed to it.
void reverse_arr(int arr[], int size){
  for(int i = 0; i<size/2; i++){
    int temp = arr[i];
    arr[i] = arr[size-1-i];
    arr[size-1-i] = temp;
  }
}

// Q.3 Counting number of positive integers in an array using a function.
int count(int arr[], int size){
  int counter = 0;
  for(int i = 0; i<size; i++){
    if(arr[i]>0){
      counter++;
    }
  }
  return counter;
}

int main(){
  // Q.1 Array of 10 integers to store multiplication table of 5 in it.
  int table;
  printf("Which table? ");
  scanf("%d", &table);
  int arr[10];
  for(int i = 0; i<10; i++){
    printf("Enter the table: %d X %d = ", table, i+1);
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i<10; i++){
    printf("%d X %d = %d\n", table, i+1, arr[i]);

  // Q.2
  int arr[] = {1,2,3,4,5,6,7,8,9,10};
  int size = sizeof(arr)/sizeof(arr[0]);
  for(int i = 0; i<size; i++){
    printf("%d ", arr[i]);
  }
  reverse_arr(arr, size);
  printf("\n");
  for(int i = 0; i<size; i++){
    printf("%d ", arr[i]);
  }

  // Q.3
  int arr[] = {1,-2,3,4,5,6,-7,8,9,10};
  int size = sizeof(arr)/sizeof(arr[0]);
  printf("%d", count(arr, size));

  // Q.4 array of size 3 X 10 containing multiplication tables of the 2, 7 and 9 respectively.
  int arr[3][10];
  int table[] = {2, 7, 9};
  for(int i = 0; i<3; i++){
    printf("Table %d:\n", table[i]);
    for(int j = 0; j<10; j++){
      printf("%d X %d = ", table[i], j+1);
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i = 0; i<3; i++){
    printf("Table %d:\n", table[i]);
    for(int j = 0; j<10; j++){
      printf("%d X %d = %d\n", table[i], j+1, arr[i][j]);
    }
  }

  // Q.4 Creating a 3-D array and printing the address of its elements in increasing order.
  int arr[3][2][3];
  for(int i = 0; i<3; i++){
    for(int j = 0; j<2; j++){
      for(int k = 0; k<3; k++){
        int * ptr = &arr[i][j][k];
        printf("%u\n", ptr);
      }
    }
  }
}
