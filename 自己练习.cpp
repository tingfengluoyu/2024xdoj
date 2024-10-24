#include<stdio.h>
int main()
{
	int arr1[5];
	int arr2[5];
	int i;
	scanf("%c|%c|%c|%c|%c",&arr1[0],&arr1[1],&arr1[2],&arr1[3],&arr1[4]);
	for(i = 0;i < 5;i++)
	{
		arr2[i] = arr1[i] + 32;
	};
	printf("%c%c%c%c%c!",arr2[0],arr2[1],arr2[2],arr2[3],arr2[4]); 
	return 0;
}
