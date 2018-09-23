#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define MAX 100


word* setWArray (int lenght) {
  printf ("|\n");
  word* array;

  array = malloc (lenght * sizeof (word));

  for (int i = 0; i < lenght; i++) {
    int ch, count = 0;
    char* tmp = malloc (MAX);
    while (ch = getc (stdin) == '\n')
    while (ch != EOF && ch != '\n') {
      tmp[count++] = ch;
      printf ("%c", ch);
      ch = getc (stdin);
    }
    array[i] = NewWord (count, tmp);
    printf ("%s\n|\n", tmp);
  }

  return array;
}

int **setMatrix (int m, int n) {
  int **matrix;

  //Aloca memoria da matriz
  matrix = malloc (m * sizeof (int *));
  for (int i = 0; i < n; i++)
    matrix[i] = malloc (n * sizeof (int));

  //le entrada e coloca na matriz
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      scanf ("%d", &matrix[i][j]);
  return matrix;
}

void printMatrix (int **matrix, int m, int n) {
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++)
      printf ("%d", matrix[i][j]);
    printf ("\n");
  }
}

//Output: 30 popped from stack
//        Top element is 20
int main () {
  int m, n, nwords;
  scanf ("%d %d", &m, &n);
  while (m != 0 || n != 0) {
    int **matrix = setMatrix (m, n);
    word* words;

    scanf ("%d", &nwords);
    words = setWArray (nwords);

    //printf ("LOL\n");

    scanf ("%d %d", &m, &n);
  }
  return 1;
}
