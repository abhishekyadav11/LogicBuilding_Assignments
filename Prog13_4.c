#include<stdio.h>

int MultDigits(int iNo)
{
	int iDigit = 0, iMult = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
      iDigit = iNo % 10;
      iMult = iMult * iDigit;
	  iNo = iNo / 10;
	}
	
	return iMult;
}

int main()
{
	int iValue = 0, iRet = 0;
	
	printf("Enter number : \n");
	scanf("%d",&iValue);
	
	iRet = MultDigits(iValue);
	
    printf("Multiplication of all digits : %d\n",iRet);
	
	return 0;
}