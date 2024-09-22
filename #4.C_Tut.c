#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  srand(time(0));
  int rand_num = rand()% 100 + 1;
  printf("Guess the number sir!\n");
  int user;
  scanf("%d", &user);
  int attempts = 1;
  while(user != rand_num){
    if(user>rand_num){
      printf("Lower number please!\n");
      scanf("%d", &user);
    }
    else if(user<rand_num){
      printf("Higher number please!\n");
      scanf("%d", &user);}

    else if(user == rand_num){
      break;
    } 
    attempts++;
  }
  printf("You guessed the number in %d attempts: ", attempts);
}
