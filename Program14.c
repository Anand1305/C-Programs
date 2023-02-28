#include<stdio.h>

int Summation(int iValue)
{
	int iCnt = 0;
	register int iRet = 0;
	for(iCnt = 1 ; iCnt <= iValue ; iCnt++)
	{
		iRet = iRet + iCnt ;
	}
	return iRet;
}

int main()
{
	int iNo = 0;
	int iAns;
	printf("Please Enter a how many numbers summation you want : \n");
	scanf("%d",&iNo);
	
	iAns = Summation(iNo);
	printf("The Summation is : %d \n", iAns);
	return 0;
}