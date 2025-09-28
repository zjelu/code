#include<stdio.h>
int f[1001],n,m,sum=0;
void init()
{
    for(int i=1;i<=n;i++)
        f[i]=i;
        return;
}

int  getf(int v)
{   
    if(f[v]==v)
    {
    return v;
    }
    
    else
    {
    f[v]=getf(f[v]);
    return f[v];
    }
}

void merge(int v,int u)
{
    int t1,t2;
    t1=getf(v);
    t2=getf(u);
    if(t1!=t2)
    {
     f[t2]=t1;
    }
    return;
}

int main()
{
int i,x,y;
scanf("%d %d",&n,&m);
init();
for(i=1;i<=m;i++)
{
    scanf("%d %d",&x,&y);
    merge(x,y);
}
for(i=1;i<=n;i++)
{
    if(f[i]==i)
    {
        sum++;
    }
}
printf("%d\n",sum);

}