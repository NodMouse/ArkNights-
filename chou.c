#include<stdio.h>
#include<stdlib.h>
#include<math.h>
double six=0.02;
double maybe=0;
double zhongjiang(int c)
{
    if(c>=100)
    {
        printf("��,���Ѿ�����");
        exit(0);
    }
    else if(c<=50)
    {
        maybe=pow((1-six),c);
        printf("��Ӧ���еļ�����%f\n",1-maybe);
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
        printf("��Ӧ���еĸ�����%f\n",(1-maybe));
    }
    return maybe;
}
int main()
{
    int c;
    double now;
    double nextone;
    printf("����������˶���\n");
    scanf("%d",&c);
    now=zhongjiang(c);
    //nextone=zhongjiang(c+1);
    //printf("˳����������´γ齱�еĸ���ѧ����Ϊ%f",(nextone/now));
    return 0;
}