#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int main(){

    int x,y;


    printf("Write first number: ");
    scanf("%d",&x);

    printf("Write second number: ");
    scanf("%d",&y);

    printf("__________________________________________\n\n");

    printf("Soma de dois numeros -> %d\n",sum(x,y));
    printf("Subtracao de dois numeros -> %d\n",sub(x,y));
    printf("Multiplicacao de dois numeros -> %d\n",mult(x,y));
    printf("Divisao de dois numeros -> %d\n",divide(x,y));
}