#include<stdio.h>
int multiplication(int iA, int iB, int iret)
{
	iret = iA * iB;
	return iret;
}

int main()
{
	int iNo1 = 0 , iNo2 = 0;
	int iAns = 0;
	printf("Enter first number : \n");
	scanf("%d",&iNo1);
	
	printf("Enter Second Nubmber: \n");
	scanf("%d",&iNo2);
	
	
	iAns = multiplication(iNo1,iNo2,iAns);
	printf("The multiplication is %d: ", iAns);

	
	
	return 0;
}