#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int i = 0;
    int t = 0; 
    int j = 0;
    int arr[4];
    
    scanf("%d %d %d %d",&a,&b,&c,&d);
    
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    arr[3] = d;
    
    for(i = 0;i < 3;i++)
    {
        for(j = i + 1;j < 4;j++)
        {
            if(arr[i] > arr[j])
            {
            t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
            }
        }
    }
    printf("%d %d %d %d",arr[0],arr[1],arr[2],arr[3]);
    return 0;
}