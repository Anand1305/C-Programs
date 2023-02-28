#include<stdio.h>
void Display(int iValue)
{
	register int iCnt = 0;
	iCnt = 1;
	while(iCnt <= iValue)
	{
		printf("The Numbers are : %d \n",iCnt);
		iCnt++;
	}
}
int main()
{
	int iNo = 0;
	
	printf("Enter the iterations\n");
	scanf("%d",&iNo);
	Display(iNo);
	
	return 0;
}