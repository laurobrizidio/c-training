#include <stdio.h>
#include <stdlib.h>

//Name: Lauro Benicio Gambizs Brizidio
// Date: June 19, 2021


//First of All

//Declare a function above of main() function.


//-------------------------------------------------


/* 
-> This is a function declaration, this is the reason to make the implementation after the main function, 
the compiles now, know about the existence of the sum() function, into the code.
*/


int sum(int,int); // You doesn't need to name the parameters. 


//Main function to execute at the start of program.
int main(){
    int x,y;

    printf("\t\t\tProgram to sum two numbers\n\n");
    
    
    printf("\t\t\tWrite number 1: ");
    scanf("%d",&x);
    
    
    printf("\t\t\tWrite number 2: ");
    scanf("%d",&y);
    
    //Calls sum() function;
    //Receive returns of sum of x and y.
    int sum_result = sum(x,y);

    printf("The result of sum is: %d",sum_result);
}


int sum (int a, int b){
    return a+b;
}