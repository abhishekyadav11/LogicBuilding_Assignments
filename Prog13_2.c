#include<stdio.h>

int CountOdd(int iNo)
{
	int iDigit = 0, iOddCnt = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
      iDigit = iNo % 10;
	  if(iDigit % 2 != 0)
	  {
		  iOddCnt++;
	  }
	  iNo = iNo / 10;
	}
	
	return iOddCnt;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = CountOdd(iValue);
	
    printf("Total odd digit : %d\n",iRet);
	
	return 0;
}