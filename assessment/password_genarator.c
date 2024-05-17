#include <stdio.h>
#include <time.h>

int randomint(int lower, int upper) {
  return (rand() % (upper - lower + 1) + lower);
}

int main() {
  srandom(time(NULL));
  int length;
  printf("Input password length: ");
  scanf("%d", &length);
  if (length < 6) {
    printf("Password can not be less that 6.\nUsing default length 6.\n");
    length = 6;
  }
  char password[length + 1], special_chars[2];
  password[length] = '\0';

  for (int i = 0; i < length; i++) {
    if (i == 1) {
      password[i] = randomint('a', 'z');
    } else if (i == 3) {
      password[i] = randomint('A', 'Z');
    } else if (i == 5) {
      password[i] = randomint('0', '9');
    } else if (i == 6) {
      special_chars[0] = randomint('!', '/');
      special_chars[1] = randomint(':', '@');
      password[i] = special_chars[randomint(0, 1)];
    } else {
      password[i] = randomint('!', '~');
    }
  }

  for (int i = 0; i < length; i++) {
    printf("%c", password[i]);
  }
  printf("\n");
  return 0;
}
