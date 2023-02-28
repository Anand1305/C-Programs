#include<stdio.h>

void DisplayFactors(int iValue)
{
	register int iCnt = 0;
	for(iCnt = 1; iCnt < iValue ; iCnt++)
	{
		if((iValue % iCnt) == 0)
		{
			printf("The Factors of %d are :%d \n",iValue,iCnt);
		}
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the Number : ");
	scanf("%d",&iNo);
	
	DisplayFactors(iNo);
	return 0;
}	