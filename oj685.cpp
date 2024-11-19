#include<stdio.h>
#include<string.h>

int main()
{
    char arr[101];
    fgets(arr, 100, stdin);
    arr[strcspn(arr, "\n")] = '\0';

    int read = 0;
    int write = 0;
    int len = strlen(arr);

    for (read = 0; read < len; read++)
    {
        if (arr[read] != '*')
        {
            arr[write++] = arr[read];
        }
    }

    arr[write] = '\0';

    for (int i = 0; i < write - 1;  i++)
    {
        for (int j = 0; j < write - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                char t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }

    printf("%s", arr);
    return 0;
}