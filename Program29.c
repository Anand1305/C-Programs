//Count Even Digits in Number
#include<stdio.h>
int CountEvenDigits(int iNo)
{
	int iEvenCnt = 0;
	int iDigit = 0;
	if(iNo == 0)
	{
		return 1;
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
		
	}
	return iEvenCnt;	
}


int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter The Number :  \n");
	scanf("%d",&iValue);
	
	iRet = CountEvenDigits(iValue);
	printf("The Count of even digits are : %d",iRet);
	
	return 0;
}