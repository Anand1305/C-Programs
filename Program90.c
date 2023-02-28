// Accept Full Name Display on Screen
#include<stdio.h>


int main()
{
	char Arr[30];
	printf("Enetr Youre Full Name\n");
	//scanf("%s",&Arr);
	scanf("%[^'\n']s",Arr);
	
	printf("%s ",Arr);
	
	return 0;
}