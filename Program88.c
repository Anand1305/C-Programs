#include<stdio.h>
#include<stdbool.h>

bool IsDigitX(char ch)
{
	if((ch >= '0') && (ch <= '9'))
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
	char cValue = '\0';
	bool bRet = false;
	
	printf("Please Enter One Charchter\n");
	scanf("%c",&cValue);
	
	bRet = IsDigitX(cValue);
	if(bRet == true)
	{
		printf("%c is The  Digit letter\n",cValue);
	}
	else
	{
		printf("%c is not the Digit letter\n",cValue);
	}
	return 0;
	
}