#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
	char cValue = 'A';
	
	for(i = 1; i <= iRow ; i++)
	{
		for(j = 1; j <= iCol; j++)
		{
			printf("%c ",cValue);
			cValue++;
		}
		printf("\n");
		cValue = 'A';
	}
}

int main()
{
   int iValue1 = 0, iValue2 = 0;
   
   printf("Enter number of rows & columns : \n");
   scanf("%d%d",&iValue1,&iValue2);
   
   Pattern(iValue1,iValue2);
   
   return 0;
}	