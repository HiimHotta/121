#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int Lenght (word s) {
  return s.lenght;
}

char* SString (word s) {
  return s.array;
}

word NewWord (int lenght, string s) {
  word tmp;
  tmp.lenght = lenght;
  tmp.array = malloc (lenght);
  for (int i = 0; i < lenght; i++)
    tmp.array[i] = s[i];
  return tmp;
}

void mainTest() {

}
