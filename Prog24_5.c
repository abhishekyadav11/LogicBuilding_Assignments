#include<stdio.h>

void Display(char ch)
{
	printf("Decimal\tHexadecimal\tOctal\tCharacter\n");
    printf("%d\t%x\t%o\t%c\n",ch,ch,ch,ch);		
}

int main()
{
	char cValue = '\0';

	printf("Enter the character : \n");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}
