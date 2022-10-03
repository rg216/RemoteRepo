#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *initStack()
{
    Node *S = (Node *)malloc(sizeof(Node));
    S->data = 0;
    S->next = NULL;
    return S;
}

int isEmpty(Node *S)
{
    if (S->next == NULL || S->data)
        return 0;
    else
        return 1;
}

int pop(Node *S)
{
    if (isEmpty(S))
    {
        return -1;
    }
    else
    {
        Node * node = (Node*)malloc(sizeof(Node));
        node = S->next;
        int data=node->data;
        S->next=node->next;
        S->data--;
        return data;
    }
}

void push(Node *S, int data)
{
    Node *node = (Node *)malloc(sizeof(node));
    node->data = data;
    node->next = S->next;
    S->next=node;
    S->data++;
}

void printStack(Node *S){
    Node * node = S->next;
    while(node){

    }
}

int main()
{

    return 0;
}