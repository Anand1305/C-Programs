// Dislpay Revese Numbers 
#include<stdio.h>

int Reverse(int iValue)
{
	int iCnt = 0;
	printf("\n----------------------------\n");
	for(iCnt = iValue; iCnt >= 1 ; iCnt--)
	{
		printf("%d\t",iCnt);
	}
	printf("\n----------------------------\n");
}

int main()
{
	int iNo = 0;
	printf("Enter the number : ");
	
	scanf("%d",&iNo);
	
	Reverse(iNo);
	
	return 0;
}