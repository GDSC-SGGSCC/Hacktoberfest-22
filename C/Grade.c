// take marks of 5 subjects as input to calculate grades
#include <stdio.h>
int main()
{
float a,b,c,d,e,sum;
printf(" enter marks of English , Maths , Physics , Chemistry, Bio out of 20 respectively ");
scanf("%f%f%f%f%f" , &a,&b,&c,&d,&e);
sum = a+b+c+d+e;

if(85<=sum && sum<=100)
{printf("Grade = A+");}

else if(60<=sum && sum<85)
{printf("Grade = A");}

else if(50<=sum && sum<60)
{printf("Grade = B");}

else if (35<=sum && sum<50)
{printf("Grade = C");}

else {printf("Fail");} 
return 0;
}
