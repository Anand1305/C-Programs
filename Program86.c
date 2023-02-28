#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
	if((ch >= 'a') && (ch <= 'z'))
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
	
	bRet = CheckSmall(cValue);
	if(bRet == true)
	{
		printf("%c is The Small Case letter\n",cValue);
	}
	else
	{
		printf("%c is not the small case letter\n",cValue);
	}
	return 0;
	
}