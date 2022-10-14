//WAP to multiply two ararys
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[2][2],b[2][2],i,j,k; 
int mult[2][2]; 
 
   printf("Enter elements of first array: \n");
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
       scanf("%d",&a[i][j]);
       printf("\n");
   }

   printf("Enter elements of second array: \n");
   for(i=0;i<2;i++)
   { for(j=0;j<2;j++)
       scanf("%d",&b[i][j]);
       printf("\n");
   }

	for(i=0;i<2;i++) 
    {
        for(j=0;j<2;j++)
        {
            mult[i][j]=0;
            for(k=0;k<2;k++)
            mult[i][j] += a[i][k]*b[k][j];
        }
    }  
    for(i=0;i<2;i++) 
    {
        for(j=0;j<2;j++)
        printf("%d ",mult[i][j]);
        printf("\n");
    }

return 0;
}
