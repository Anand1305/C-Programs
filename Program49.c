// Accept N numbers From user and display revesrse numbers
#include<stdio.h>
#include<stdlib.h>
void DisplayReverse(int Arr[],int iSize)
{
	int iCnt = 0;
	
	for(iCnt = iSize-1; iCnt >= 0 ; iCnt--)
	{
		printf("%d\n",Arr[iCnt]);
	}
}
	

int main()
{
	int *ptr = NULL;
	int iLength = 0,i = 0;
	
	printf("Enter The Number of Elements : \n");
	scanf("%d",&iLength);
	
	ptr = (int *)malloc(sizeof(int) * iLength);
	
	printf("Enter the Elements : \n");
	for(i = 0; i < iLength ; i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("The Reverse Numbers Are : \n");
	DisplayReverse(ptr,iLength);
	
	free(ptr);
	
	return 0;
}