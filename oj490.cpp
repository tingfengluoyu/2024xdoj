#include<stdio.h>
int main()
{
    int a = 0;
    int N = 0;
    int cishu = 0;
    scanf("%d %d",&a,&N);

    while(1)
    {
        int n = 0;
        scanf("%d",&n);
        cishu++;

        if(n < 0 || cishu > N)
        {
            printf("Game Over\n");
            break;
        }
        else if(n > a)
        {
            printf("Too big\n");
        }
        else if(n < a)
        {
            printf("Too small\n");
        }
        else 
		{
		    if(cishu == 1)
			{
			   printf("Bingo!\n");
			}
            else if(cishu > 1 && cishu <= 3)
            {
               printf("Lucky You!\n");
            }
            else if(cishu > 3 && cishu <= N)
            {
               printf("Good Guess!\n");
            }
            break; 
		}
    }
    return 0;
}