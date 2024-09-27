#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  // Q.1 Program to read three integers from a file.
  FILE *ptr;
  ptr = fopen("filename.txt", "r");
  int num;
  for(int i = 0; i < 3; i++){
    fscanf(ptr, "%d", &num);
    printf("%d  ", num);
  }

  // Q.2 Program to generate multiplication table of a given number in text format.
  FILE *ptr;
  ptr = fopen("tables.txt", "w");
  int table;
  printf("Enter the table number: ");
  scanf("%d", &table);
  for(int i=1; i<=10; i++){
    fprintf(ptr, "%d x %d = %d\n", table, i, table*i);
  }

  // Q.3 Program to read a text file character by character and write its content twice in separate       file.
  FILE *ptr;
  FILE *ptr2;
  ptr = fopen("filename.txt", "r");
  ptr2 = fopen("newfile.txt", "a");
  while(1){
    char c = fgetc(ptr);
    if(c == EOF){
      break;
    }
    fputc(c, ptr2);
    fputc(c, ptr2);
  }

  // Q.4 Take name and salary of two employees as input from the user and write them to a text file in the following format:
  // Name1, 3300
  // Name2, 7700
  
  FILE *ptr;
  ptr = fopen("filename.txt", "a");
  char user1[30];
  int user1_salary;
  char user2[30];
  int user2_salary;

  printf("Enter your name user1: ");
  scanf("%s", user1);
  printf("Enter your salary user1: ");
  scanf("%d", &user1_salary);
  printf("Enter your name user2: ");
  scanf("%s", user2);
  printf("Enter your salary user2: ");
  scanf("%d", &user2_salary);

  fprintf(ptr, "i.  %s, %d\n", user1, user1_salary);
  fprintf(ptr, "ii. %s, %d", user2, user2_salary);
  fclose(ptr);

  // Q.5 Program to modify a file containing an integer to double its value.
  FILE *ptr;
  ptr = fopen("filename.txt", "r");
  int num;
  fscanf(ptr, "%d", &num);
  fclose(ptr);
  ptr = fopen("filename.txt", "w");
  fprintf(ptr, "%d", num*2);
  fclose(ptr);
}
