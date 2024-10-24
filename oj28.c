#include<stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d",&a,&b);
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int c = (a % 4 == 0 && a / 100 != 0 )||( a % 400 == 0);
      if(c)
      {
        arr[1] = 29;
      }
      printf("%d\n",arr[b-1]);
    return 0;
}