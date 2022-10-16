#include <stdio.h>
#define SIZE 2
int top = -1, stack[SIZE];
void push(int x)
{
 if (top == SIZE - 1)
 printf("Stack overflow\n");
else stack[++top] = x;
}
void pop()
{
if (top == -1) printf("Stack underflow\n");
else
{
printf("%d\n", stack[top]); top--;
}
}
void display()
{
int i;
printf("Content of the stack\n");
 for (i = 0; i <= top; i++)
 printf("%d\t", stack[i]);
printf("\n");
}
void main()
{
int x, option;
 char c;
do
{
	printf("Which operation is to be do\n1 : push\n2 : pop\n3 : Display elements\n Enter option:");
	 scanf("%d", &option);
	 switch (option)
{
case 1:
{
	 printf("Enter element to push :");
 scanf("%d", &x);
 push(x);
 break;
}
case 2:
{
pop();
 break;
}
case 3:
{
display();
 break;
}
 default:
{
printf("Wrong Input\n");
}
}
getchar();
 printf("Do you want to do operations again(y/n) :");
 scanf("%c", &c);
}
 while (c == 'y' || c == 'Y');
 printf("\n");
}
