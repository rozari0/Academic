#include <stdio.h>
#define ROW 3
#define COLUMN 3
int main() {
  int i, j,
      mat1[ROW][COLUMN] =
          {

              {1, 2, 3},
              {4, 5, 6},
              {7, 8, 9},
          },
      mat2[ROW][COLUMN] = {
          {9, 8, 7},
          {6, 5, 4},
          {3, 2, 1},
      };
  int sum[ROW][COLUMN];
  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COLUMN; j++) {
      sum[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

  for (i = 0; i < ROW; i++) {
    for (j = 0; j < COLUMN; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }
}
