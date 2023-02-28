// Display non factors of number

#include<stdio.h>

void DisplayNonFactors(int iValue)
{
	register int iCnt = 0;
	for(iCnt = 1; iCnt < iValue ; iCnt++)
	{
		if((iValue % iCnt) != 0)
		{
			printf("The Non Factors of %d are :%d \n",iValue,iCnt);
		}
	}
}

int main()
{
	int iNo = 0;
	printf("Enter the Number : ");
	scanf("%d",&iNo);
	
	DisplayNonFactors(iNo);
	return 0;
}	