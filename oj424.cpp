#include<stdio.h>
int runnian(int x)
{
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int nian = 0;
    int yue = 0;
    int ri = 0;
    int shi = 0;
    int fen = 0;
    int miao = 0;

    scanf("%d",&nian);
    scanf("%d",&yue);
    scanf("%d",&ri);
    scanf("%d",&shi);
    scanf("%d",&fen);
    scanf("%d",&miao);

    miao += 1;
    if(miao == 60)
    {
        miao = 0;
        fen += 1;
    }

    if(fen == 60)
    {
        fen = 0;
        shi += 1;
    }

    if(shi == 24)
    {
        shi = 0;
        ri += 1;
    }

    if(yue == 1 && ri == 31)
    int arr[4] = {4,6,9,11};
    int brr[7] = {1,3,5,7,8,10,12};
    for(int i = 0; i < 4; i++)
    {
        yue += 1;
        ri = 1;
        if(yue == arr[i] && ri == 31)
        {
            ri = 1;
            yue += 1;
        }
    }
    if(yue == 3 && ri == 31)
     {
        yue += 1;
        ri = 1;
    }
    if(yue == 5 && ri == 31)
     {
        yue += 1;
        ri = 1;
    for(int i = 0; i < 7; i++)
    {
        if(yue == brr[i] && ri == 32)
        {
            ri = 1;
            yue += 1;
        }
    }
    if(yue == 7 && ri == 31)
     {
        yue += 1;
    if(yue == 2 && runnian(nian) && ri == 30)//是闰年且为2月29日
    {
        ri = 1;
    }
    if(yue == 8 && ri == 31)
     {
        yue += 1;
        ri = 1;
    }
    if(yue == 10 && ri == 31)
     {
        yue += 1;
        ri = 1;
    }
    if(yue == 12 && ri == 31)
     {
        nian += 1;
        yue = 1;
        ri = 1;
    }
    if(yue == 2 && runnian(nian) && ri == 29)
    else if(yue == 2 && !runnian(nian) && ri == 29)//不是闰年且为2月28日
    {
        ri = 1;
        yue += 1;
    }
    if(yue == 2 && !runnian(nian) && ri == 28)
    if(yue == 13)
    {
        yue += 1;
        ri = 1;
        yue = 1;
        nian += 1;
    }

    printf("%d\n%d\n%d\n%d\n%d\n%d\n",nian,yue,ri,shi,fen,miao);
    return 0;
}