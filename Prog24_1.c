#include<stdio.h>

void DisplayAscii()
{
	int i = 0;
    for(i = 0; i <= 127; i++)
	{
       printf("%d\t%x\t%o\t%c\n",i,i,i,i);
	}		
}

int main()
{
	DisplayAscii();
	
	return 0;
}
