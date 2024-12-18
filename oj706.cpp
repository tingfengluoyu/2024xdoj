#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char mainstr[41];
	char substr[21];
	int n = 0;
	scanf("%20s", mainstr);
	scanf("%20s", substr);
	scanf("%d", &n);

	char* p = &mainstr[n];
	char arr[21];
	int i = 0;
	while (*p) {
		arr[i++] = *p;
		*p = 0;
		p++;
	}
	arr[i] = '\0';

	strcat(mainstr, substr);
	strcat(mainstr, arr);

	printf("%s", mainstr);

	return 0;
}