/*
	Row = 6
	col = 6
	
	*
	*	*
	*	*	*
	*	*	*	*

*/
#include<stdio.h>

void Display(int iRow,int iCol)
{
	int i = 0, j = 0;
	
	for(i = 1; i <= iRow ; i++)
	{
		for(j = 1 ; j <= i ; j++)
		{
			printf("*\t");	
		}
		printf("\n");
	}
}
int main()
{
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter Number of rows\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of coloumns\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}