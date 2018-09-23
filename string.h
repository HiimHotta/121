#ifndef STRING_H_
#define STRING_H_
#define MAX 100

// string
typedef struct {
    int lenght;
    char *array;
} word;

typedef char* string;

// Function to Create A New Node
int Lenght (word s);

char* SString (word s);

word NewWord (int lenght, string s);

void mainTest();

#endif /* STRING_H_ */
