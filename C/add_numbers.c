/*
 * A simple program to add two numbers
 * */


#include <stdio.h>

int main(){

    int a, b;

    printf("Enter number a: ");
    if(scanf("%d", &a)){
        printf("Enter number b: ");
        if(scanf("%d", &b)){
            printf("Result: %d\n", a+b);
        }
    }

    return 0;
}
