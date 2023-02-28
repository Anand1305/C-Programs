//Count Even & Odd Digits in Number
#include<stdio.h>
void DisplayEvenOddDigits(int iNo)
{
	int iEvenCnt = 0;
	int iOddCnt = 0;
	int iDigit = 0;
	if(iNo == 0)
	{
		iEvenCnt++;
	}
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		iNo = iNo/10;
		if((iDigit%2)==0)
		{
			iEvenCnt++;
		}
		else
		{
			iOddCnt++;
		}
	}
	printf("The Number of even Digits are :%d\n",iEvenCnt);
	printf("The Number of odd Digits are :%d\n",iOddCnt);
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter The Number :  \n");
	scanf("%d",&iValue);
	
	DisplayEvenOddDigits(iValue);
	
	return 0;
}