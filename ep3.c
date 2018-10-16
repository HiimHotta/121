#include <stdio.h>
#include <stdlib.h>

//long int sort (long int n, long int array) {

//}

void Flip (long int pos, long int n, long int *array) {
  for (int i = 0; i < (n - pos) / 2; i++) {
    long int tmp = array[pos + i];

    array[pos + i] = array[n - 1 - i];
    array[n -1 - i] = tmp;
  }
}


/*
long int* Flip (long int pos, long int n, long int *array) {
  long int *aux, aux2 = n - 1;
  aux = malloc (n * sizeof (long int));

  for (int i = 0; i < pos; i++)
    aux[i] = array[i];

  for (int i = pos; i < n; i++) 
    aux[i] = array[aux2--];
  
  free (array);
  return aux;
}
*/

int main () {
  long int n, *array;

  scanf ("%ld", &n);
  array = malloc (n * sizeof (long int));
  
  for (int i = 0; i < n; i ++)
    scanf ("%ld", &array[i]);

  for (int i = 0; i < n; i ++)
    printf ("%ld ", array[i]);
  printf ("\n");

  Flip (0, n, array);

  for (int i = 0; i < n; i ++)
    printf ("%ld ", array[i]);

  free (array);
  return 0;
}
