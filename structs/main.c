#include <stdio.h>
#include <stdlib.h>
typedef struct person Person;
//Name: Lauro Benicio Gambizs Brizidio
// Date: June 19, 2021

struct person{
    char* name;
    int age;
};

Person* new_person(){
    return (Person*) malloc(sizeof(Person));
}

int main(){
    Person* lauro = new_person();


    lauro->name = "Lauro";
    lauro->age = 20;

    printf("Person: %s\n",lauro->name);
    printf("Person: %d\n",lauro->age);
}