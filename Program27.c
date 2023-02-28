// Count The Digits from number
#include <stdio.h>

int CountDigits(int iNo)
{
	//int iDigit = 0;
	int iCnt = 0;
	if(iNo == 0) 	//filter
	{
		return 1;
	}
	
	while(iNo!= 0)
	{
		//iDigit = iNo % 10;
		iNo = iNo / 10;
		iCnt++;
	}
	return iCnt;
}
int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Please enter The number : \n");
	scanf("%d",&iValue);
	
	iRet = CountDigits(iValue);
	
	printf("Number of Digits are : %d\n",iRet);
	
	return 0;
}