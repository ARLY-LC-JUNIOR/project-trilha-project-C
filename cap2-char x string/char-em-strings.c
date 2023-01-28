#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv [])
{
    char nome [30];
    printf ("digite seu nome:  ");
    gets(nome);
    system("cls");
    system("color 6");
    printf("Bem Vindo %s\n", nome);
    system("pause");
    return 0;
}