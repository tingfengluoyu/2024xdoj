#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char dad[100];
	char son[100];
	int n = 0;
	scanf("%20s", dad);
	scanf("%20s", son);
	scanf("%d", &n);

	int len1 = strlen(dad);
	int len2 = strlen(son);

	for (int i = len1; i >= n; i--) {
		dad[i + len2] = dad[i];
	}

	int j = 0;
	for (int i = n; i < n + len2; i++) {
		dad[i] = son[j++];
	}

	printf("%s", dad);

	return 0;
}