// Problem Statment: Accept Number from user and check whether it is disvisible by 5 or not
#include<stdio.h>
#include<stdbool.h>
bool DivisibleByFive(int iValue)
{
	int iAns = 0;
	iAns = iValue % 5;
	
	if ( iAns == 0)
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
	int iNo1 = 0;
	bool bRet = false;
	
	printf("Enter The Number : \n");
	scanf("%d",&iNo1);
	
	bRet = DivisibleByFive(iNo1);
	if(bRet == false)
	{
		printf("%d Number is Not Divsible By 5 \n",iNo1);
	}
	else
	{
		printf("%d Number is Divisible By 5 \n",iNo1);
	}
	
	return 0;
}