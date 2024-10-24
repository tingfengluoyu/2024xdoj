#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int MAX = 0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int arr[4] = {a,b,c,d};
     for(int i = 0;i < 4;i++)
     {
        if(arr[i] > MAX)
        {
            MAX = arr[i];
        };
     };
    printf("%d\n",MAX);
    return 0;
}