// Chek whetehre the number is perfect or not in 3 functions
#include<stdio.h>
#include<stdbool.h>


int DisplayFactorSummation(int iValue)
{
	int iCnt = 0;
	int isum = 0;
	for(iCnt = 1; iCnt <= (iValue/2) ; iCnt++)
	{
		if((iValue%iCnt) == 0)
		{
			isum = isum + iCnt;
		}
		
	
	}
	return isum;
}

bool ChekPerfectOrNot(int iData)
{
	int iCheck = 0;
	iCheck = DisplayFactorSummation(iData);
	if(iCheck == iData)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int iNo = 0;
	bool bAns = false;
	printf("Enter The Number : ");
	scanf("%d",&iNo);
	
	
	bAns = ChekPerfectOrNot(iNo);
	if(bAns == true)
	{
		printf("%d is perfect number\n",iNo);
	}
	else
	{
		printf("%d is not perfect number\n",iNo);
	}
	return 0;
}