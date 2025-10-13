#include<stdio.h>
int n,m,i;
int u[6],v[6],w[6];//要比M的最大值大一
int first[5],next[6];
int main(){
scanf("%d %d",&n,&m);
for(i=1;i<=n;i++)
    {
    first[i]=0;
    }
for(i=1;i<=m;i++)
    {
        scanf("%d %d %d",&u[i],&v[i],&w[i]);
        next[i]=first[u[i]];
        first[u[i]]=i;

    }
}