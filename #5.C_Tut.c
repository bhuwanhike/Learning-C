#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Q.1 Function to find average of three numbers.
float avg(int a, int b, int c){
  int sum = a + b + c;
  float avg = sum/3.0;
  return avg;
}

// Q.2 Funtion to convert Celsius to Fahrenheit.
float cel_to_fah(float celsius){
  return ((celsius * (9.0/5.0)) + 32);
}

// Q.3 Function to calculate force of attraction on a body of mass 'm' exerted by earth.
float force(float mass){
  return mass * 9.8;
}

// Q.4 Function to calculate nth element of Fibonacci series.
int fib(int n){
  if(n == 0){
    return 0;
  }
  if(n == 1){
    return 1;
  }
  return fib(n-1) + fib(n-2);
}

// Q.5 Function to calculate the sum of first 'n' natural numbers.
int sum(int n){
  if(n == 1){
    return 1;
  }
  return n + sum(n-1);
}

// Q.6 Function to print the following pattern (first n lines).
                /*
                     *
                     * * *
                     * * * * *
                */
void pattern(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<(i*2)+1; j++){
      printf("* ");
    }
    printf("\n\n");
  }
}

int main(){
  // printf("%f", avg(2,5,6));  // Q.1 
  // printf("%.2f", cel_to_fah(45));  // Q.2
  // printf("%.2f m/s^2", force(20));  // Q.3
  // printf("%d", fib(50));  // Q.4
  // printf("%d", sum(1065587));  // Q.5
  // pattern(7);  // Q.6
  
}
