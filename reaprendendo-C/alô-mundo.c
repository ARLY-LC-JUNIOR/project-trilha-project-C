//Linhas abaixo as 1, 2 e 3 Chamam as bibliotecas.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(int argc, char * argv[] )
{
    //A linha abaixo configura o idioma para portugues. 
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("color 7");
    printf("Ol�, al�, mundo, Hello, World...agora � backend e baixo n�vel com C ");
    return 0;
}