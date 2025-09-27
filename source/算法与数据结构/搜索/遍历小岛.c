#include <stdio.h>
int a[51][51];
int book[51][51];
int sum;
void dfs(int x,int y){
    int next[4][2]={
    {1,0},
    {0,1},
    {0,-1},
    {-1,0}};
    int k,tx,ty,n,m;
for(k=0;k<=3;k++)
    {
    tx=x+next[k][0];
    ty=x+next[k][1];
   
if(tx<1||tx>n||ty<1||ty>m){
        continue;
        }
if (a[tx][ty]>0&&book[tx][ty]==0){
     book[tx][ty]=1;
     sum++;
     dfs(tx,ty);
        }

    }
    return;
}
int main(){
    int i,j,num,n,m,starx,stary,sum=0;
    scanf("%d %d",&n,&m);
     for(i=0;i<n;i++)
         for(j=0;j<n-i-1;j++)
            scanf("%d",&a[i][j]);
    
    scanf("%d %d %d %d",&n,&m,&stary,&starx);
    book[starx][stary]=0;
    sum=1;
    dfs(&starx,&stary);
    pritnf("%d\n",sum);
    
}

