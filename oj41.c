#include<stdio.h>
int main()
{
    int a = 0;
    int n = 0;
    int i = 0;
    int you = 0;
    int liang = 0;
    int qing = 0;
    int zhong = 0;
    int chong = 0;
    int yan = 0;

    scanf("%d",&n);
    int arr[100] = {0};
    
    for(i = 0;i < n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i] >= 0 && arr[i] <= 50)
        {
            you++;
        }else if(arr[i] >= 51 && arr[i] <= 100){
            liang++;
        }else if(arr[i] >= 101 && arr[i] <= 150){
            qing++;
        }else if(arr[i] >= 151 && arr[i] <= 200){
            zhong++;
        }else if(arr[i] >= 201 && arr[i] <= 300){
            chong++;
        }else {
            yan++;
        }
        a += arr[i];
    }

    double jun = (double)a / (double)n;
    
    printf("%.2f\n",jun);
    printf("%d %d %d %d %d %d\n",you,liang,qing,zhong,chong,yan);
    
    return 0;
}