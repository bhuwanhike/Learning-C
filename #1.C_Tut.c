#include <stdio.h>

int main(){
  // Q.1 Printing the area of a rectangle, by taking user input.
  int length;
  int width;
  printf("Sir, pls enter the value of length: ");
  scanf("%d", &length);
  printf("Sir, pls enter the value of width: ");
  scanf("%d", &width);
  printf("Sir, the required area is: %d sq. m", length*width);

  
  // Q.2 Printing the area and volume of a circle and cylinder respectively, by taking user input.
  #include<math.h>
  int radius;
  int height;
  printf("Sir, pls enter the value of radius: ");
  scanf("%d", &radius);
  printf("Sir, the required area is: %f sq. m \n", M_PI * radius * radius);

  printf("Sir, pls enter the value of height: ");
  scanf("%d", &height);
  printf("Sir, the required volume is: %f sq. m", M_PI * radius * radius * height);

  
  // Q.3 Program to convert Celcius to Fahrenheit.
  float C;
  printf("Sir, pls enter the Celsius temperature: ");
  scanf("%f", &C);
  printf("Sir, the required Farenheit temperature is %f :", (C * (9.0/5.0)) + 32);


  // Q.4 Calculate simple interest.

  float p = 200, r = 2, t = 4;
  printf("The SI is: %f", (p*r*t)/100);
 

  // Ternary operator
  int a = 2;
  (a>5)?printf("hwlo"): printf("yes");

  
  
}
