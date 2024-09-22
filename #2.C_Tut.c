#include <stdio.h>

int main(){
  // Q.1 if else

  int a = 10;      // This will print first print statement. 
  if(a = 11) printf("I am 11");
  else printf("I am not 11");


  // Q.2 Program to determine whether a student has passed or failed using if-else.

  float physics, chemistry, maths;
  printf("Enter the marks of physics:" );
  scanf("%f", &physics);
  printf("Enter the marks of chemistry:" );
  scanf("%f", &chemistry);
  printf("Enter the marks of maths:" );
  scanf("%f", &maths);
  float total_per = ((physics+chemistry+maths)/3);
  if(total_per>=40 || (physics>=33) && (chemistry>=33) && (maths>=33)) printf("Passed");
  else printf("Failed");


  // Q.3 Program to find the income tax on a given salary.
  float salary;
  printf("What is your salary? ");
  scanf("%f", &salary);
  if(salary<2.5) printf("Don't worry you don't have to pay any tax.");
    
  else if(salary>=2.5 && salary<=5.00) printf("Your tax amount is: %.2f", (salary-2.5)*0.05*100000);
    
  else if(salary>5.00 && salary<=10.00) printf("Your tax amount is: %.2f", ((salary-5.0)*0.2*100000) + (2.5)*0.05*100000);
    
  else if(salary> 10.0) printf("Your tax amount is: %.2f", (salary-10.0)*0.3*100000 + (5.0)*0.2*100000 + (2.5)*0.05*100000);


  // Q.4 Program to find a leap year.
  int year;
  printf("Enter the year: ");
  scanf("%d", &year);
  ((year%100==0 && year%400==0) && (year%100==0 || year%4==0))? printf("Leap year"): printf("Not a leap year");

  
  // Q.5 Program to check whether character is lowercase or not.
  char ch;
  scanf("%c", &ch);
  if(ch >=97 && ch<=122) printf("Lowercase");
  else printf("Not lowercase");
}
