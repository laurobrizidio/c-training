#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void swap(char *x, char* y){
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permutation(int initial, char* data, int last){
    if(initial == last){
        printf("%s\n",data);
    }
    else{
        for(int i = initial; i<=last;i++){
            swap((data+initial),(data+last));
            permutation(initial+1,data,last);
            swap((data+initial),(data+last));
        }
    }
}

int main(){
    char* word;
    word = malloc(sizeof(char));


    printf("Digite uma palavra: ");
    scanf("%s",word);


    int size = strlen(word);
    permutation(0,word,size-1);


    return 0;

}