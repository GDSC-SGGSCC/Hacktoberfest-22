#include<stdio.h>
 int main()
 {int i,j,r,k;
   printf("Enter no. of rows u want to print: ");
    scanf("%d",&r);
 for(i=1;i<=r;i++)
    {
        for(j=1;j<=(r-i);j++)
        
            printf("  ");
          for(k=1;k<=i;k++)
           {printf(" *  ");} 
          printf("\n");
    
    }
 for(i=1;i<=r;i++)
    {
        for(j=1;j<=(i);j++)
        
            printf("  ");
            for(k=1;k<=r-i;k++)
            printf(" *  ");
            printf("\n");
    }
    return 0;
 }
