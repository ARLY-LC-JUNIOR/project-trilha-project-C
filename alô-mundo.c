//Linhas abaixo as 1, 2 e 3 Chamam as bibliotecas.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(int argc, char * argv[] )
{
    //A linha abaixo configura o idioma para portugues. 
    setlocale(LC_ALL, "Portuguese_Brazil");
    system("color 7");
    printf("Olá, alô, mundo, Hello, World...agora é backend e baixo nível com C ");
    return 0;
}