//WAP to find transpose of an array
#include<stdio.h>
#include<stdlib.h>

int main()
{
int a[3][3],i,j,k; 
int trans[3][3]; 
 
   printf("Enter elements of array: \n");
   for(i=0;i<3;i++)
   {
     for(j=0;j<3;j++)
       scanf("%d",&a[i][j]);
       
   }

	for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++)
        {
            trans[i][j]=0;
            trans[i][j] = a[j][i];
        }
    }  
    for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++)
        printf("%d ",trans[i][j]);
        printf("\n");
    }

return 0;
}
