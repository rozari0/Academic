#include <stdio.h>
#include <time.h>

int randomint(int lower, int upper) {
  return (rand() % (upper - lower + 1) + lower);
}

int swap(char *first, char *second) {
  char temp = *first;
  *first = *second;
  *second = temp;
}

int main() {
  srandom(time(NULL));
  char special_chars[] = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~";
  int length;
  printf("N = ");
  scanf("%d", &length);
  if (length < 6) {
    length = 6;
  }
  char password[length + 1];
  password[length] = '\0';

  for (int i = 0; i < length; i++) {
    switch (i) {
    case 0:
      password[i] = special_chars[randomint(0, sizeof(special_chars) - 1)];
      break;
    case 1:
      password[i] = randomint('a', 'z');
      break;
    case 3:
      password[i] = randomint('A', 'Z');
      break;
    case 5:
      password[i] = randomint('0', '9');
      break;
    default:
      password[i] = randomint('!', '~');
    }
  }

  for (int i = 0; i < length; i++) {
    swap(&password[i], &password[randomint(0, length - 1)]);
  }

  printf("Password = %s\n", password);
  return 0;
}
