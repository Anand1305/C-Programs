#include<stdio.h>

int Summation(int iValue)
{
	register int iRet = 0;
	for(iValue = 1 ; iValue <= 5 ; iValue++)
	{
		iRet = iRet + iValue;
	}
	return iRet;
}

int main()
{
	int iNo = 0;
	int iAns = 0;
	
	iAns = Summation(iNo);
	
	printf("The Summation is : %d \n",iAns);
	return 0;
}