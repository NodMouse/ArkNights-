#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double six=0.02;
double maybe=0;
double zhongjiang(int c)
{
    if(c>=100)
    {
        printf("咦,你已经中了");
        exit(0);
    }
    else if(c<=50)
    {
        maybe=pow((1-six),c);
        printf("你应该中的几率是%f\n",1-maybe);
    }
    else
    {
        int left=c-50;
        int i=1;
        double nsix=0.98;
        maybe=pow(0.98,50);
        for(i;i<=left;i++)
        {
            nsix-=0.02;
            maybe=nsix*maybe;
        }
        printf("你应该中的概率是%f\n",(1-maybe));
    }
    return maybe;
}
int main()
{
    int c;
    double now;
    double nextone;
    printf("请输入你抽了多少\n");
    scanf("%d",&c);
    now=zhongjiang(c);
    //nextone=zhongjiang(c+1);
    //printf("顺便告诉你你下次抽奖中的概率学概率为%f",(nextone/now));
    return 0;
}