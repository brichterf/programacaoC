#include <stdio.h>

int main(){

int numero1, numero2, resultado;
numero1 = 10;

resultado = 10;
printf("Resultado: %d\n", resultado);

 //resultado = resultado + 20;
resultado += 20;
printf("Resultado: %d\n", resultado);

//resultado = resultado - numero1;
resultado -= numero1;
printf("Resultado: %d\n", resultado);

 //resultado - resultado * 5;
resultado *= 5;
printf("Resultado: %d\n", resultado);

 //resultado = resultado / 2;
resultado /= 2;
printf("Resultado: %d\n", resultado);

return 0;

}