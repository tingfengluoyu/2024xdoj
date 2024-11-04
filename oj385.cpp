#include <stdio.h>
int tiao(int a)
{
	int b = 0;
	if (a % 7 ==0 )
    {
		b = 1;
	}
	while (a != 0)
    {
		if (a % 10 == 7)
        {
			b = 1;
			break;
		}
		else
        {
			a /= 10;
		}
	}
	return b;
}
//判断是否为7的倍数或是否含7.
int main()
{
	int i = 1;
    int n = 0;
    int jump1 = 0;
    int jump2 = 0;
    int jump3 = 0;
    int m = 0;
	scanf("%d", &n);

	while (i != n + m + 1)
    {
		if (tiao(i))
        {
			if (i % 3 == 1)
            {
				jump1 += 1;
			}
			else if (i % 3 == 2)
            {
				jump2 += 1;
			}
			else 
            {
				jump3 += 1;
			}
			m += 1;
		}
		i++;
	}
	printf("%d %d %d", jump1, jump2, jump3);
	return 0;
}
