// Find Table of Given Number
#include<stdio.h>
int DisplayTable(int iValue)
{
	int iCnt = 0;
	int iMult = 0;
	printf("Table of %d is : \n",iValue);
	printf("_________________________________________\n\n");
	for(iCnt = 1; iCnt <= 10 ; iCnt++)
	{
		printf("%d \n",iValue * iCnt);
	}
	printf("_________________________________________\n");
}

int main()
{
	int iNo = 0;
	int iAns = 0;
	
	printf("Enter the number : \n");
	scanf("%d",&iNo);
	
	DisplayTable(iNo);

	
	return 0;
}