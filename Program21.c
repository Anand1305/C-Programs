#include<stdio.h>

int DisplayNonFactorSummation(int iValue)
{
	int iCnt = 0;
	int isum = 0;
	for(iCnt = 1; iCnt <= iValue ; iCnt++)
	{
		if((iValue%iCnt) != 0)
		{
			isum = isum + iCnt;
		}
		
	
	}
	return isum;
}

int main()
{
	int iNo = 0;
	int iAns = 0;
	printf("Enter The Number : ");
	scanf("%d",&iNo);
	
	
	iAns = DisplayNonFactorSummation(iNo);
	printf("THe Summation of non Ftactors is : %d \n",iAns);
	
	return 0;
}