/*Write down a program that will take three integers as
input and will print second largest*/

#include <stdio.h>
int main(void)
{
 int n1, n2, n3;
 printf("Please enter three integers:");
 scanf("%i%i%i", &n1, &n2, &n3);
 if(n1 > n2 && n1 > n3)
 {
 if(n2 > n3)
 printf("Second largest: %i", n2);
 else
 printf("Second largest: %i", n3);
 }
 else if(n2 > n1 && n2 > n3)
 {
 if(n1 > n3)
 printf("Second largest: %i", n1);
 else
 printf("Second largest: %i", n3);
 }
 else
 {
 if(n1 > n2)
 printf("Second largest: %i", n1);
 else
 printf("Second largest: %i", n2);
 }
 return 0;
}
