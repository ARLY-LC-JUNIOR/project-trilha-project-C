//Linhas abaixo as 1, 2 e 3 Chamam as bibliotecas.

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(int argc, char * argv[] )
{
    //A linha abaixo configura o idioma para portugues. 
    setlocale(LC_ALL, "Portuguese_Brazil");
    //Essa linha abaixo muda  cor da fonte no compilador/terminal deposi de executar. 
    system("color D");
    printf("...Hello World, Olá alô mundo, agora é backend e com baixo nível em C ");
    system ("pause");
    //linha baixo limpa a tela 
    system ("cls");
    //Após aparecer o Hello world, aperte qualquer tecla, irá aparecer um novo print. 
    printf("A vida é louca\n");
    return 0;
}