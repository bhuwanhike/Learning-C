#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() {
  // Snake, Water, Gun
  printf("_____________WELCOME To THE GAME_____________\n\n\n");
  srand(time(0));
  int computer = (rand() % 3);
  int computer_score = 0;
  int player_score = 0;
  while (1) {
    int player;
    printf("Snake -> 0, Water -> 1, Gun -> 2 : ");
    scanf("%d", &player);

    if ((computer == 0 && player == 0) || (computer == 1 && player == 1) ||
        (computer == 2 && player == 2)) {
      printf("Draw\n");
    } else if ((computer == 0 && player == 2) ||
               (computer == 1 && player == 0) ||
               (computer == 2 && player == 1)) {
      printf("You won!\n");
      player_score++;
    } else if ((computer == 0 && player == 1) ||
               (computer == 1 && player == 2) ||
               (computer == 2 && player == 0)) {
      printf("You lose!\n");
      computer_score++;
    }
    else if(player == 5){
      printf("Your total score is: %d\n", player_score);
      printf("Computer's total score is: %d\n", computer_score);
      if(player_score>computer_score) printf("Congrats! You won the game.");
      else if(player_score==computer_score) printf("It's a draw.");
      else if(player_score<computer_score) printf("Sorry, you lose! better luck next time.");
      break;
    }

    printf("Computer: %d\n", computer_score);
    printf("You: %d\n", player_score);
  }
}
