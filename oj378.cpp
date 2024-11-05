#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n % 2==1){
		printf("-1\n");
	}
	else {
		for (int i = 19;i > 0;i--){
			if (n>=pow(2,i)){
				printf("%d ", (int)pow(2,i));
				n -= pow(2,i);
			}
			if (n == 0){
				break;
			}
		}
	}
	return 0;
}
int main()
{
    long long n = 0;
    scanf("%lld",&n);
    if(n % 2 == 1)
    {
        printf("-1\n");
        return 0;
    }
    else
    {
        for(int i = 100; i > 0; i--)
        {
            if(n >= pow(2,i))
            {
                printf("%d ",(int)pow(2,i));
                n -= pow(2,i);
            }
        }
        printf("\b");
    }
    return 0;
}