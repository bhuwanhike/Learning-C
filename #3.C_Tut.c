#include <stdio.h>

int main(){
  // Q.1 Program to print table.
  int table;
  printf("Which table?");
  scanf("%d", &table);
  int i =  1;
  while(i<=10){
    printf(" %d X %d = %d\n",table, i, table*i);
    i++;
  }

  
  // Q.2 Program to print table in reversed order.
  int table;
  printf("Which table?");
  scanf("%d", &table);
  int i =  10;
  while(i>=1){
    printf(" %d X %d = %d\n",table, i, table*i);
    --i;
  }


  // Q.3 Program to print sum of first ten natural numbers using while loop.
  int i = 1;
  int sum = 0;
  while(i<=10){
    sum+=i;
    i++;
  }
  printf("%d", sum);

  
  // Q.4 Program to print sum of first ten natural numbers using for while loop.
  int sum = 0;
  for(int i = 0; i<=10; i++){
    sum+=i;
  }
  printf("%d", sum);


  // Q.5 Program to print sum of first ten natural numbers using do-while loop.
  int i = 1;
  int sum = 0;
  do{
    sum+=i;
    i++;
  }while(i<=10);
  printf("%d", sum);


  // Q.6 Program to find sum of numbers occurring in table of 8.
  int sum = 0;
  for(int i = 1; i<=10; i++){
    sum+=8*i;
  }
  printf("%d", sum);


  // Q.7 Program to find factorial of a given number using for loop.
  int fact = 1;
  int num;
  printf("Enter the value of num: ");
  scanf("%d", &num);
  for(int i = 1; i<=num; i++){
    fact*=i;
  }
  printf("%d", fact);


  // Q.8 Program to find factorial of a given number using while loop.
  int fact = 1;
  int num;
  printf("Enter the value of num: ");
  scanf("%d", &num);
  int i = 1;
  while(i<=num){
    fact*=i;
    i++;
  }
  printf("%d", fact);


  // Q.9 Program to check whether a given number is prime or not using for loop.
  #include<stdbool.h>
  int num;
  printf("Enter the value of num: ");
  scanf("%d", &num);
  bool isPrime = true;
  if(num == 0 || num == 1){
    isPrime = false;
  }
  for(int i = 2; i<num; i++){
    if(num%i==0){
      isPrime = false;
      break;
    }
    else isPrime = true;
  }

  if(isPrime) printf("Prime");
  else printf("not prime");

}
