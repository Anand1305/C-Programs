// Dislpay Revese Numbers 
#include<stdio.h>

int Reverse(int iValue)
{
	int iCnt = 0;
	printf("\n----------------------------\n");
	iCnt = iValue;
	while(iCnt>=1)
	{
		printf("%d\t",iCnt);
		iCnt--;
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