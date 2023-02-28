#include<stdio.h>
#include<stdbool.h>

bool IsCaptialX(char ch)
{
	if((ch >= 'A') && (ch <= 'Z'))
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
	
	bRet = IsCaptialX(cValue);
	if(bRet == true)
	{
		printf("%c is The Capital Case letter\n",cValue);
	}
	else
	{
		printf("%c is not the Capital case letter\n",cValue);
	}
	return 0;
	
}