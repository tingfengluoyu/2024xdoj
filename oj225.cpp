#include<stdio.h>
#define SIZE 3
void zhuanzhi(int A[SIZE][SIZE],int AT[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            AT[i][j] = A[j][i];
        }
    }
}
void xiangjia(int A[SIZE][SIZE],int AT[SIZE][SIZE],int B[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            B[i][j] = A[i][j] + AT[i][j];
        }
    }
}
void dayin(int B[SIZE][SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int A[SIZE][SIZE],AT[SIZE][SIZE],B[SIZE][SIZE];

    for(int i = 0; i < SIZE; i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    zhuanzhi(A,AT);
    xiangjia(A,AT,B);
    dayin(B);
    return 0;
}