#include <stdio.h>

int main(){
  char string[100];
  printf("Input a string: ");
  fgets(string, sizeof(string), stdin);
  int word = 1;

  for (int i = 1; string[i]; i++){
    if (string[i] == ' ' &&  string[i+1] != ' ' && string[i+1] != '\n'){
      word++;
    }
  }

  printf("This string has %d word.\n",word);
  
  return 0;
}
