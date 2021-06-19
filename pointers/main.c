#include <stdio.h>
#include <stdlib.h>

//Name: Lauro Benicio Gambizs Brizidio
// Date: June 19, 2021

void multiply_by_two(int*,int*);

int main(){

    system("clear");
    int a,b;

    int result;

    printf("\t\t\tProgram to sum two numbers\n");
    printf("\t\t\tUsing Pointers\n\n");
    
    printf("\t\t\tWrite number 1: ");
    scanf("%d",&a);
    
    
    printf("\t\t\tWrite number 2: ");
    scanf("%d",&b);


    //Passing values as reference to function multipy_by_two
    multiply_by_two(&a,&b);

    printf("\t\t\tWrite number 1 after multiply by two: %d\n",a);
    printf("\t\t\tWrite number 2 after multiply by two: %d\n",b);

}



// function to multiply numbers as reference by two

void multiply_by_two(int* a, int* b){
    *a *=2;
    *b *=2;
}


