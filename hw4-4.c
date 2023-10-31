#include <stdio.h>


int main()
{
    int ii,max=0,my,mx,x=0,y=0,t=0;
    scanf("%d",&ii);
    int pair[ii][ii];
    for(y=0;y<ii;y++)
    {
    for( x=0;x<ii;x++)
    {
    scanf("%d", &pair[y][x]);
    }
    }

for(int k=0;k<2;k++)
{
    k=0;

    for(y=0;y<ii;y++)
{

    for(x=0;x<ii;x++)
    {
        if(pair[y][x]>max)
    {
     max=pair[y][x];
     my=y;
     mx=x;
    }

    }

    }
    printf("boy %d pair with girl %d\n",my+1,mx+1);
    for(int i=0;i<ii;i++)
    {
    pair[i][mx]=0;
    pair[my][i]=0;
    }
    for(int i=0;i<ii;i++)
    {

    for(int j=0;j<ii;j++)
        {
    if(pair[i][j]==0)  t++;
        }


    }
    if(t == ii*ii)
    break;
    else t=0;
    max=0;
}

}
