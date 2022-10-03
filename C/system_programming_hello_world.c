#include<stdio.h> 
#include<stdlib.h> 
int main(int argc,char**argv){ 
	union a{ 
		int b; 
		char c[4]; 
	}; 
	union a*d[(argc>>=31)+3]; 
	while(argc++<4) d[argc-2]=(union a*)malloc(sizeof(union a)); 
	d[0]->b=1819043144; 
	d[1]->b=1870078063; 
	d[2]->b=560229490; 
	printf("%s%s%s\n",d[0]->c,d[1]->c,d[2]->c);return 0;} 
