#include<stdio.h>
int main()
{
    int y = 0;
    int d = 0;
    int m = 0;
    int i = 0;
    int arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d",&y,&d);
      if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
      {
         arr[1] = 29;
      };
    while(d > arr[i])
      {
        d -= arr[i];
        i++;
      }
      printf("%d %d\n",i + 1,d);
    return 0;
}