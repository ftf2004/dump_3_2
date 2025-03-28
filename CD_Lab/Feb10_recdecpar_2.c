#include<stdio.h>

int i = 0, t = 1;
char str[20];

void E();
void EPRIME();
void T();
void TPRIME();
void F();
void error();

void main()
{
    printf("The given grammar is:\n");
    printf("\nE -> E+T | T");
    printf("\nT -> TF | F");
    printf("\nF -> F* | a | b");
    printf("\nEnter the string to be parsed: ");
    scanf("%s", str);
    E();
    
    if(t != 1 || str[i] != '\0')
    {
        printf("\nGiven string is not accepted");
    }
    else
    {
        printf("The given string is accepted");
    }
}

void E() {
    T();
    EPRIME();
}

void EPRIME() {
    if(str[i] == '+') {
        i++;
        T();
        EPRIME();
    }
    else {
        return;
    }
}

void T() {
    F();
    TPRIME();
}

void TPRIME() {
    if(str[i] == 'F') {   // Handling TF here
        i++;
        F();
        TPRIME();
    }
    else {
        return;
    }
}

void F() {
    if(str[i] == 'a' || str[i] == 'b') {
        i++;
    }
    else if(str[i] == 'F') {   // Handling F* here
        i++;
        if(str[i] == '*') {
            i++;
        }
    }
    else {
        error();
    }
}

void error() {
    t = -1;
}

