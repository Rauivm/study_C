#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 32


int convert_binary_to_integer(int *binary, int n){
    int integer = 0;
    int current_power = 1;
    for (int i=n-1;i>=0;i--){
        if(binary[i]==1){
            integer = integer + current_power;
        }
        current_power = current_power*2;
    }
    return integer;
}

int main(){

    int *number;
    int s = 0;

    printf("Put valor 0 to exit!\n");

    while(1){
        printf("Which number binary do you like to convert to a decimal?");
        char *n = (char*)malloc(SIZE * sizeof(char));
        scanf("%31s",n);
        setbuf(stdin, NULL);
        if(strlen(n)<31){
            number = (int*)malloc(strlen(n) * sizeof(int));
            for(int i=0; n[i]!='\0'; i++){
                   number[i] = n[i] - '0';
            }
            printf("%d\n",convert_binary_to_integer(number,strlen(n)));
            free(number);
        }
        else printf("This number is too big! Try again!\n");

        free(n);
    }
    return 0;
}
