//Sites usados
//https://www.geeksforgeeks.org/stack-data-structure-introduction-program/
// /https://stackoverflow.com/questions/18582205/linkedlist-struct-typedef-in-c

// C program for linked list implementation of stack
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct node {
    string data;
    struct node *next;
} node;

node* newNode(string data) {
    node* stackNode = malloc(sizeof(node));
    stackNode->data = data;
    stackNode->next = NULL;
    return stackNode;
}

int isEmpty(node *root) {
    return !root;
}

void push(node** root, string data) {
    node* stackNode = newNode(data);
    stackNode->next = *root;
    *root = stackNode;
    //printf("%d pushed to stack\n", data);
}

string pop(node** root) {
    if (isEmpty(*root))
        return NULL;
    node* temp = *root;
    *root = (*root)->next;
    string popped = temp->data;
    free(temp);

    return popped;
}

string peek(node* root) {
    if (isEmpty(root))
        return NULL;
    return root->data;
}

int main() {
    node* root = NULL;

    push(&root, "10");
    push(&root, "20");
    push(&root, "30");

    printf("%s popped from stack\n", pop(&root));

    printf("Top element is %s\n", peek(root));

    return 0;
}
