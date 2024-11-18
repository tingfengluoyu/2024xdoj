#include<stdio.h>
#include<string.h>

void wd_sort(char str[10][21],int n);

int main()
{
    char str[10][21];
    int n = 0;
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        scanf("%20s", str[i]);
    }

    wd_sort(str,n);

    for (int i = 0; i < n; i++)
    {
        printf("%s\n",str[i]);
    }

    return 0;
}

void wd_sort(char str[10][21], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (strcmp(str[j],str[j + 1]) > 0)
            {
                char t[21];
                strcpy(t,str[j]);
                strcpy(str[j],str[j + 1]);
                strcpy(str[j + 1],t);
            }
        }
    }
}