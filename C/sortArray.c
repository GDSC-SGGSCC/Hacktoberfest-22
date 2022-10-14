//WAP to sort an array in ascending order
#include<stdio.h>

int main()
{
int i,j,ar[5],c;

printf("Enter elements of array: ");
for(i=0;i<5;++i)
{ 
  scanf("%d",&ar[i]);	
}

for(i=0;i<5;++i)
{
	for(j=i+1;j<5;++j)
	{
		if(ar[i]>ar[j])
          { c=ar[i];
		    ar[i]=ar[j];
		    ar[j]=c;   }
	}
}
printf("Sorted Array is ");

for(i=0;i<5;++i)
{
	printf("%d ",ar[i]);
}

return 0;
}
