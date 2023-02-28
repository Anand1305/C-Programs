
// check whether number is divsible by three and five or not
#include<stdio.h>
#include<stdbool.h>

bool DivisbleByThreeAndFive(int iNo1)
{
	
	if((iNo1%3==0) && (iNo1%5==0))
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
	bool bAns = false;
	
	printf("Enter the Number : \n");
	scanf("%d",&iValue);
	
	bAns = DivisbleByThreeAndFive(iValue);
	
	if(bAns == true)
	{
		printf("%d The Number is  Divisible by 5 and 3 \n",iValue);
	}
	else
	{
		printf("%d The Number is Not Divisible by 5 and 3 \n",iValue);
	}
	return 0;
}