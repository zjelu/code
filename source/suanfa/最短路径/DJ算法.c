#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,k,u,dis[15],book[101];
    printf("边的条数与点的个数为");
    scanf("%d %d",&n,&m);
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
    
    for(i=1;i<=m;i++)
    {   int t1,t2,t3;
        printf("开始构图");
        scanf("%d %d %d",&t1,&t2,&t3);
        a[t1][t2]=t3;

    }

    for(i=1;i<=n;i++)
        {
        dis[i]=a[1][i];
        }

    for(i=1;i<=n;i++)
        book[i]=0;
    book[1]=0;
    
    for(i=1;i<=n-1;i++)
    {   int min =99999; 
       
    for(j=1;j<=n;j++)
        {   
        if(dis[j]<min && book[j]==0)
            {  
            min=dis[j];
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
    {
    printf("%10d",dis[j]);
    } 
    getchar();
    getchar();
    return 0;
    

}