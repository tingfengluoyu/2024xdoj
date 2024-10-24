#include<stdio.h>
int main()
{
    int n = 0;
    int count = 0;
    int max = 0;
    int min = 9;
    scanf("%d",&n);

    if(n == 0)
    {
      max = min = 0;
      count = 1;
    }else{
      while(n > 0)
      {
        int num = n % 10;
        count++;
        if(num > max)
        {
          max = num;
        }
        if(num < min)
        {
          min = num;
        }
        n /= 10;
      }
    }

    printf("%d %d %d\n",count,max,min);

    return 0;
}