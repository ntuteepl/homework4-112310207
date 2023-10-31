#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,k=0,x=0,y=1,sum=0,num=0,s[100],d[100],sf[100],df[100],s1,d1,count=0;
    while(scanf("%d%d",&s[i],&d[i])!=EOF)  //輸入
    {
        i++;
        count++;
    }

    for(i=0;i<count-1;i++)             //整理班表
    {
        for(int j=0;j<count;j++)
        {
            if(s[j]>s[j+1])
            {
                s1=s[j];
                s[j]=s[j+1];
                s[j+1]=s1;

                d1=d[j];
                d[j]=d[j+1];
                d[j+1]=d1;
            }
        }
    }

    for(i=0;i<count;i++)        //備份
    {
        sf[i]=s[i];
        df[i]=d[i];
    }

    while(y!=0)                          //幾台車
    {
        for(i=0;i<count;i++)
        {
            sum=0;

            if(d[x]<=s[i])
            {
                x=i;
                s[i]=0;
            }
            s[x]=0;

            if(i==count-1)
            {
                num++;
                for(j=0;j<count;j++)


 free(drivers);

    return 0;
}
