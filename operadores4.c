#include <stdio.h>

int main(){

int numero1 = 1, resultado;

printf("Antes do incremento: %d\n", numero1);
 //Pós incremento seria:
 //resultado = numero1;
 //numero1++;
resultado = numero1++;
printf("Após o Pós-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

resultado = ++numero1;
printf("Após o Pré-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

resultado = numero1--;
printf("Após o Pós-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

resultado = --numero1;
printf("Após o Pré-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

return 0;

}