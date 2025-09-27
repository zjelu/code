#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,k,starx,stary,dis[15]={"0"},book[101];
    scanf("边的条数=%d 点的个数=%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            {
            a[i][j]=0;
            }
            else
            {
            a[i][j]=99999;
            }
        }
        
    }
    scanf("%d %d",&starx,&stary);
    
    for(i=1;i<=m;i++)
    {   int t1,t2,t3;
        scanf("%d %d %d",&t1,&t2,&t3);
        a[t1][t2]=t3;

    }

    for(i=1;i<=n;i++)
        {
        dis[i]=a[1][i];
        book[i]=0;
        }
        book[1]=1;
    for(j=1;j<=n-1;j++)
    {      int u;
    for(k=1;k<=n;k++)
        {   
        int min =99999;
        if(dis[k]<min&&book[j]==0)
            {  
            min=dis[k];
            u=j;
            }
        }
        book[u]=1;
        for(int v=1;v<=n;v++)
        {
            if(a[u][v]<99999)
            {
                if(dis[v]>dis[u]+a[u][v])
                {
                   dis[v]=dis[u]+a[u][v]; 
                }
            }
        }

    }
    for(j=1;j<=n;j++)
            {printf("%10d",a[i][j]);

            } 
            return 0;
    

}