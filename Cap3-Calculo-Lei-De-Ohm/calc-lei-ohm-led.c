// Neste programa iremos calcular o resistor limitador de corrente para o Led usando a Lei de Ohm.
// R = Vin - Viled / (dividido pela corrente que o led precisa Iled)

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


float Vin =  0.0,
      Vled = 0.0,
      Iled = 0.0,
      R    = 0.0;

int main (int argc, char *argv[] )
{

    setlocale(LC_ALL, "Portuguese_Brazil"); 
    printf("LED CALC  v1.0\n\n");
    printf("Autor: Arly Júnior\n\n");

    printf(" Digite o valor de Vin (em Volts):  ");
    scanf("%f", &Vin);
    printf("\n\n");
    printf(" Digite o valor de Vled (em Volts):  ");
    scanf("%f", &Vled);
    printf("\n\n");
    printf("Digite o valor de Iled (em Amperes):  ");
    scanf("%f", &Iled);  
    printf("\n\n");

    R = (Vin-Vled)/Iled;

    printf("Vin  = %.2f\n\n",Vin);
    printf("Vled = %.2f\n\n",Vled);
    printf("Iled = %.2f\n\n",Iled);
    printf("O Resistor para o LED tem o valor de %.2f Ohms\n\n",R);
}
