// Print The Maximum Digit from Number
#include<stdio.h>

int MaxDigit(int iNo)
{
	int iDigit = 0;
	int iMax = 0;
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo % 10;
		if(iDigit > iMax)
		{
			iMax = iDigit;
		}
		
		if(iMax == 9)
		{
			break;
		}
	
		iNo = iNo / 10;
	}
	return iMax;
}

int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter The number : \n");
	scanf("%d",&iValue);
	
	iRet = MaxDigit(iValue);
	
	printf("The Largest Digit is %d \n",iRet);
	
	return 0;
}