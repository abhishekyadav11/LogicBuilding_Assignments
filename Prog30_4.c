#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
	int data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertLast(PPNODE First, int no)
{
	PNODE newn = (PNODE)malloc(sizeof(NODE));
	PNODE temp = NULL;
	
	newn->data = no;
	newn->next = NULL;
	
	if(*First == NULL)
	{
		*First = newn;
	}
	else
	{
		temp = *First;
		
		while(temp->next != NULL)
		{
			temp = temp->next;
		}
		
		temp->next = newn;
	}
}

void Display(PNODE First)
{
	while(First != NULL)
	{
		printf("| %d |->",First->data);
		First = First->next;
	}
	printf("NULL\n");
}

void DisplaySmall(PNODE First)
{
	int iDigit = 0, No = 0, iSmall = 0;
	
	while(First != NULL)
	{
		No = First->data;
		iSmall = No % 10;
		No = No / 10;
		
		while(No > 0)
		{
			iDigit = No % 10;
		    
			if(iDigit < iSmall)
			{
				iSmall = iDigit;
			}
			No = No / 10;
		}
		
		printf("Smallest digit from %d is %d\n",First->data,iSmall);

		First = First->next;

	}	
}

int main()
{
	PNODE Head = NULL;
	
	InsertLast(&Head,11);
	InsertLast(&Head,28);
	InsertLast(&Head,250);
	InsertLast(&Head,532);
	InsertLast(&Head,415);
	InsertLast(&Head,89);
	
	Display(Head);
	
	DisplaySmall(Head);
	
	return 0;
}