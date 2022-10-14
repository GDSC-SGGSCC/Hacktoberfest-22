//WAP to check whether a number is palindramic or not
#include<stdio.h>
int main()
{                                                    //n=153        //m=5     //m=1
	int n,m,l=0,f;                                   //m=3          //l=35   //l=351
    printf("Enter the number: ");                    //l=3          //n=1    //n=0
    scanf("%d",&n);                                  //n=15
    f=n;                                             //assigning value of n to a different variable since n will 
	while (n>0)                                      //take other values
	{
	  m = n%10;                                      //m will store remainder
	  l = l*10 + m;                                  //l will store the number in reverse
	  n = n/10;                                      //n will store the value of Quotient
	}
 printf("It's Reverse is %d\n",l);
 if(l==f)
 {printf("%d is Palindrome",f);
 }
 else
 {printf("%d is not palindrome",f);}
 
  return 0;
}

