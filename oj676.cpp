#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

int main()
{
	char arr[61];
	fgets(arr, 60, stdin);
	arr[strlen(arr)] = '\0';

	char* p = arr;
	while (*p) {
		if (*p >= 'a' && *p <= 'z') {
			if (*p + 13 > 'z') {
				*p -= 13;
			}
			else {
				*p += 13;
			}
		}

		if (*p >= 'A' && *p <= 'Z') {
			if (*p + 13 > 'Z') {
				*p -= 13;
			}
			else {
				*p += 13;
			}
		}
		p++;
	}

	printf("%s", arr);

	return 0;
}