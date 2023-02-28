#include<stdio.h>

void Display(int iValue,int iAsk)
{
	printf("How many times you want to print\n");
	scanf("%d",&iAsk);
	for(iValue = 0 ; iValue < iAsk ; iValue++)
	{
		printf("Jay Ganesh...\n");
	}
	
}

int main()
{
	int i = 0;
	int iHowMany = 0;
	
	Display(i,iHowMany);
	return 0;
}