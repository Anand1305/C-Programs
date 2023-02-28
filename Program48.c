// Accept N numbers From user and find the smallest number from that number
#include<stdio.h>
#include<stdlib.h>
int Minimum(int Arr[],int iSize)
{
	int iMin = Arr[0];
	int iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(Arr[iCnt] < iMin)
		{
			iMin = Arr[iCnt];
		}
	}
	return iMin;
}
	

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0,iRet = 0;
	
	printf("Enter The Number of Elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter the Elements : \n");
	for(i = 0; i < iLength ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet = Minimum(ptr,iLength);
	
	printf("The Minimum Number is : %d\n",iRet);
	
	free(ptr);
	
	return 0;
}