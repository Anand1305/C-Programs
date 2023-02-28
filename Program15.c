#include<stdio.h>

int Factorial(int iValue)
{
	int iCnt = 0;
	register int iMult = 1;
	for(iCnt = 1; iCnt <= iValue ; iCnt++)
	{
		iMult = iMult * iCnt;
	}
	return iMult;
}

int main()
{
	int iNo = 0;
	int iAns = 0;
	printf("Plaese Enter The Number : ");
	scanf("%d",&iNo);
	
	iAns = Factorial(iNo);
	
	printf("The Factorial of %d : %d \n",iNo,iAns);
	
	return 0;
}
