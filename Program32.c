//Plandrom Number

#include<stdio.h>
#include<stdbool.h>

bool CheckPalndrom(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTem =0;
	
	iTem = iNo;
	
	while(iNo != 0)
	{
		iDigit = iNo%10;
		iRev= (iRev*10) + iDigit;
		iNo = iNo / 10;
	}
	if(iRev == iTem)
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
	int iValue = 0;
	bool bRet = false;
	
	printf("Enter the Number : \n");
	scanf("%d",&iValue);
	
	bRet = CheckPalndrom(iValue);
	if(bRet == true)
	{
		printf("%d is Palndrom\n",iValue);
	}
	else
	{
		printf("%d is not an Palndrom Number \n",iValue);
	}
	
	return 0;
}