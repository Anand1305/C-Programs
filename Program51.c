// Accept N numbers From user and another number from user and find the last occurance of that number
#include<stdio.h>
#include<stdlib.h>
int ChkLastOccurance(int Arr[],int iSize,int iNo)
{
	int iCnt = 0;
	for(iCnt = iSize - 1; iCnt >= 0 ; iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			break;
		}
	}
	
	return iCnt;
}
	

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0,iRet = 0,iValue = 0;
	
	printf("Enter The Number of Elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter the Elements : \n");
	for(i = 0; i < iLength ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter The Number : \n");
	scanf("%d",&iValue);
	
	iRet = ChkLastOccurance(ptr,iLength,iValue);
	
	printf("The Last Occurance Number is : %d\n",iRet);
	
	free(ptr);
}