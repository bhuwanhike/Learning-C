#include <stdio.h>
#include <stdlib.h>

// Q.1 2-D vector using structures.
typedef struct vector {
  int i;
  int j;
} vec;

vec sumVector(vec vec1, vec vec2) {
  vec vec3 = {vec1.i + vec2.i, vec1.j + vec2.j};
  return vec3;
}

// Q.2 Arrow operator
struct arrowoper{
int num;
};

// Q.3 Program with a structure representing a complex number.
typedef struct complexno{
int real;
int imaginary;
}Complex;

// Q.4 Array of 5 complex numbers by taking input from the user and displaying them with the help of a display function.
// typedef struct complexno{
// int real;
// int imaginary;
// }Complex;

void display(Complex numarray){
  printf("%d + %di", numarray.real, numarray.imaginary);
}

// Q.5 Structure representing a bank account of a customer.
typedef struct bankaccount{
char name[40];
int account_number;
float balance;
}customer;

// Q.6 Structure capable of storing date anda function to compare those dates.
typedef struct Dates{
int dd, mm, yyyy;
}Date;

int compare(Date date1, Date date2){
  if((date1.dd==date2.dd) && (date1.mm==date2.mm) && (date1.yyyy==date2.yyyy)){
    return 0;
  }
  if((date1.yyyy > date2.yyyy)){
    return 1;
  }
  else if(date1.yyyy < date2.yyyy){
    return -1;
  }
  else if(date1.mm> date2.mm){
    return 1;
  }
  else if(date1.mm < date2.mm){
    return -1;
  }
  else if(date1.dd > date2.dd){
    return 1;
  }
  else if(date1.dd < date2.dd){
    return -1;
  }
}


int main() {
  // Q.1
  // vec vect1 = {1, 2};
  // vec vect2 = {3, 4};
  // vec vect3 = sumVector(vect1, vect2);
  // printf("%di + %dj", vect3.i, vect3.j);

  // Q.2
  // struct arrowoper e1;
  // e1.num = 45;
  // struct arrowoper *e;
  // e = &e1;
  // printf("%d", e->num);

  // Q.3
  // Complex num = {2, 5};
  // printf("%d + %di", num.real, num.imaginary);

  // Q.4 
  // Complex arraycomp[5];
  // for(int i = 0; i<5; i++){
  //   printf("Enter the real part: ");
  //   scanf("%d", &arraycomp[i].real);
  //   printf("Enter the imaginary part: ");
  //   scanf("%d", &arraycomp[i].imaginary);
  //   display(arraycomp[i]);
  //   printf("\n");
  // }

  // Q.6
  // Date date1 = {2, 6, 2022};
  // Date date2 = {1, 6, 2022};
  // printf("%d/%d/%d\n", date1.dd, date1.mm, date1.yyyy);
  // printf("%d/%d/%d\n", date2.dd, date2.mm, date2.yyyy);
  // printf("%d", compare(date1, date2));
}
