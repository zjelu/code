//队列未优化
int main(){
    int i,j,m,n,k,starx,stary,dis[15]={"0"},book[101],u[10],v[10],w[10];
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {   
        scanf("%d %d %d",&u[i],&v[i],&w[i]);
    }
    for(i=1;i<=n;i++)
    {
        dis[i]=99999;
    }
    dis[1]=0;

    for(k=1;k<=n-1;k++)
    {
        for(i=1;i<=m;i++)
        {
        if(dis[v[i]]>dis[u[i]]+w[i])
            dis[v[i]]=dis[u[i]]+w[i];
        }

    }
    for(j=1;j<=n;j++)
        {
        printf("%10d",dis[j]);

        } 
            return 0;
}