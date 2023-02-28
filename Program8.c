#include<stdio.h>
int iHowMany = 0;
void Get()
{
	printf("Please convey how many times you want to print : \n");
	scanf("%d",&iHowMany);
}
void Display(int iValue)
{
	for(iValue = 0; iValue < iHowMany ; iValue++)
	{
		printf("Jay Ganesh...\n");
	}
}
int main()
{
	int iNo = 0;
	Get();
	Display(iNo);
	
	return 0;
}