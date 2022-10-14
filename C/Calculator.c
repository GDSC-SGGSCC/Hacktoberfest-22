#include<stdio.h>
int main()
{
    char op;
    int a,b;
    printf("eNTER ANY OPERATOR:");
    scanf("%c",&op);
    printf("Enter any number a and b:");
    scanf("%d %d",&a,&b);
    switch(op)
    {
        case '+':
        printf("Sum is %d+%d=%d",a,b,a+b);
        break;

        case '-':
        printf("Sub is %d-%d=%d",a,b,a-b);

        case '*':
        printf("Mul is %d*%d=%d",a,b,a*b);

        case '/':
        printf("Div is %d/%d=%d",a,b,a/b);

        default:
        printf("ERROR 404");
    }
    return 0;
    
}
