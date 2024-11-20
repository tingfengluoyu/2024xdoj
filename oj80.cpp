#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char C = 0;
    char arr[101];
    int n = 0;
    int count = 0;
    scanf(" %c %d", &C, &n);

    scanf("%100s", arr);

    int len = strlen(arr);

    //大小写敏感，大小写看作不同字符
    if (n == 1)
    {
        for (int i = 0; i < len; i++)
        {
            if (C == arr[i])
            {
                count++;
            }
        }
    }
    //大小写不敏感，大小写看作相同字符
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (tolower(C) == tolower(arr[i]))
            {
                count++;
            }
        }
    }

    printf("%d\n",count);

    return 0;
}