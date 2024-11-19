#include <stdio.h>
int main() {
    char arr[51];
    char brr[101];
    int in = 0;
    int out = 0;
    
    scanf("%50s", arr); 

    while (arr[in] != '\0') 
    { 
        int count = 0;
        char current;
        if (arr[in] >= 'a' && arr[in] <= 'z'|| arr[in] >= 'A' && arr[in] <= 'Z') 
        { 
            if (arr[in + 1] >= '1' && arr[in + 1] <= '9' && arr[in + 2] >= '0' && arr[in + 2] <= '9')
            {
                count = 10 * (arr[in + 1] - '0') + (arr[in + 2] - '0');
                current = arr[in];
                for (int i = 0; i < count; i++)
                {
                    brr[out++] = current;
                }
                in += 3;
            }
            else if (arr[in + 1] >= '1' && arr[in + 1] <= '9' && arr[in + 2] >= 'a' && arr[in + 2] <= 'z')
            {
                count = arr[in + 1] - '0';
                current = arr[in];
                for (int i = 0; i < count; i++)
                {
                    brr[out++] = arr[in];
                }
                in += 2;
            }
            else if (arr[in + 1] >= '1' && arr[in + 1] <= '9' && arr[in + 2] >= 'A' && arr[in + 2] <= 'Z')
            {
                count = arr[in + 1] - '0';
                current = arr[in];
                for (int i = 0; i < count; i++)
                {
                    brr[out++] = arr[in];
                }
                in += 2;
            }
            else
            {
                brr[out++] = arr[in];
                in++;
            }
        }
    }

    brr[out] = '\0';
    printf("%s",brr);

    return 0;
}