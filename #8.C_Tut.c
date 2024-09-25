#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Q.1 Manual strlen function to find the length of a string.
int strlength(char str[]){
  int i = 0;
  char c = str[i];
  while(c!='\0'){
    c = str[i];
    i++;
  }
  return i-1;
}

// Q.2 Function slice() to slice string.
char* slice(char str[], int start, int end){
  char* ptr = &str[start];
  str = ptr;
  str[end] = '\0';
  return str;
}

// Q.3 Function to copy a string.
char* copystr(char source[], char target[]){
  target = source;
  return target;
}

// Q.4 Function to encrypt and decrypt a string.
char* encrypt(char str[], int size){
  for(int i = 0; i<size; i++){
       str[i] = str[i] + 1;    
  }
  return str;
}
char* decrypt(char str[], int size){
  for(int i = 0; i<size; i++){
       str[i] = str[i] - 1;    
  }

  return str;
}

int main(){
  // Q.1 
  char str[] = "Hello World";
  printf("%d", strlength(str));

  // Q.2
  char str[] = "Hello World";
  printf("%s", slice(str, 1, 8));

  // Q.3
  char source[] = "helhhtrhtrho";
  char target[] = "";
  printf("%s", copystr(source, target));

  // Q.4 Program to encrypt a string by adding 1 to the ascii value of its characters.
  char str[] = "yourz";
  int c = strlength(str);
  printf("%s\n", encrypt(str, c));
  printf("%s", decrypt(str, c));

  // Q.5Program to count the occurence of a character in a string.
  char str[] = "helhhtrhtrho";
  int c = strlength(str);
  int count = 0;
  for(int i = 0; i<c; i++){
    if(str[i] == 'h'){
      count++;
    }
  }
  printf("%d", count);

  // Q.6 Program to check whether a given character is present in a string or not.
  char str[] = "helhhtrhtrho";
  int c = strlength(str);
  int count = 0;
  for(int i = 0; i<c; i++){
    if(str[i] == 'z'){
      count=1;
      break;
    }
  }
  printf("%d", count);
  
}
