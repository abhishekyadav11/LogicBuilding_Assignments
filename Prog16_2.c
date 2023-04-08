#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iLength, int iNo)
{
	int i = 0;
	
	for(i = 0; i < iLength; i++)
	{
		if(Arr[i] == iNo)
		{
			break;
		}
	}
	
	if(i == iLength)
	{
	  return -1;
	}
	else
	{
	  return i;
	}
}

int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iValue = 0;
	int *p = NULL;
	
	printf("Enter number of elements : \n");
	scanf("%d",&iSize);
	
	printf("Enter the number : \n");
	scanf("%d",&iValue);
	
	p = (int *)malloc(iSize * sizeof(int));
	
	if(p == NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter Elements : \n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&p[iCnt]);
	}
	
	iRet = FirstOcc(p, iSize, iValue); 
	
	if(iRet == -1)
	{
	  printf("There is no such number\n");
	}
	else
	{
		printf("First occurance of number is %d\n",iRet);
	}
	
	free(p);
	return 0;
}
