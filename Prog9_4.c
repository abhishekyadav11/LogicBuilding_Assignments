#include<stdio.h>

int OddFactorial(int iNo)
{
	int iCnt = 0, iFact = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo; iCnt++)
	{
		if(iCnt % 2 != 0)
		{
		   iFact = iFact * iCnt;
		}
	}
	
	return iFact;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is %d\n",iRet);	
}