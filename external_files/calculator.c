#include "calculator.h"
#include <stdlib.h>
#include <stdio.h>

int sum(int a,int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mult(int a, int b)
{
    return  a * b;
}

int divide(int a,int b){
    if(b == 0){
        printf("Error: Division by zero");
        exit(1);
    }
    return a / b;
}