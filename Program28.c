// Count The sum of Digits from number
#include <stdio.h>

int SumDigits(int iNo)
{
	int iDigit = 0;
	int iSum = 0;
	//nt iCnt = 0;
	if(iNo == 0) 	//filter
	{
		return 1;
	}
	if(iNo < 0) 	//Updator
	{
		iNo = -iNo;
	}
	
	while(iNo!= 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo = iNo / 10;
		//iCnt++;
	}
	return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Please enter The number : \n");
	scanf("%d",&iValue);
	
	iRet = SumDigits(iValue);
	
	printf("Number of Digits are : %d\n",iRet);
	
	return 0;
}