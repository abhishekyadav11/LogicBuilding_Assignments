#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
	char cValue = 'a';
	
	for(i = 1; i <= iRow ; i++)
	{
		for(j = 1; j <= iCol; j++)
		{ 
			if(i % 2 == 0)
			{
				printf("%d ",j);
			}
			else
			{
				printf("%c ",cValue); 
				cValue++;                 				
			}			
		}
		printf("\n");
		
		cValue = 'a';
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