#include<stdio.h>
#include<string.h>
int main()
{
    char arr[200][101];
    int max = 0;
    int line = 0;
    int longest = 0;
    
    while(1)
    {
        fgets(arr[line], 101, stdin);

        size_t len = strlen(arr[line]);
        if (len > 0 && arr[line][len - 1] == '\n') {
            arr[line][len - 1] = '\0'; // 替换换行符为字符串结束符
            len--; // 更新长度，因为换行符被移除了
        }

        if (strcmp(arr[line],"***end***") == 0)
        {
            break;
        }

        if (len > max)
        {
            max = len;
            longest = line;
        }
        line++;

        if (line >= 200)
        {
            return 1;
        }
    }
    
    printf("%d\n%s",max,arr[longest]);
    
    return 0;
}