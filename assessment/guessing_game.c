#include <stdio.h>
#include <time.h>

int main() {
  srandom(time(NULL));
  int lower, upper, guess;
  printf("A = ");
  scanf("%d", &lower);
  printf("B = ");
  scanf("%d", &upper);

  int point = 10, lucky_number = (rand() % (upper - lower + 1)) + lower;
  while (point) {
    printf("Guess: ");
    scanf("%d", &guess);
    if (guess == lucky_number) {
      puts("Congratulations! You guessed the number!");
      printf("Your Score = %d\n", point);
      break;
    } else if (guess < lucky_number && (point != 1)) {
      puts("Low");
    } else if (guess > lucky_number && (point != 1)) {
      puts("High");
    }
    point--;
  }
  if (!point) {
    printf("Sorry, you ran out of tries. The number was %d\n", lucky_number);
  }
  return 0;
}
