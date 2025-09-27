#include<stdio.h>
struct note{
    int x;
    int y;
};
int a[51][51];
int book[51][51];
int main(){
    struct note quene[2501];
    int i,j,k,n,m,p,q,starx,stary;
    int sum=1;
scanf("%d %d %d %d",&n,&m,&stary,&starx); 
    
    for(i=1;i<51;i++)//读入地图
        for(j=1;j<51;j++)
            scanf("%d",&a[i][j]);
    
int next[4][2]={
    {1,0},
    {0,1},
    {0,-1},
    {-1,0}};

int head=1;
int tail=1;
quene[tail].x=starx;
quene[tail].y=stary;
book[starx][stary]=1;
int tx;
int ty;
tail++;

while (head<tail)
 {
    for(k=0;k<=3;k++)
    {

    tx=starx+next[k][0];
    ty=stary+next[k][1];
    
    if(tx<1||tx>n||ty<1||ty>m){
        continue;
    }
    if(a[tx][ty]!=0&&book[tx][ty]==0)
        {   sum++;
            quene[tail].x=tx;
            quene[tail].y=ty;
            book[tx][ty]==1;
            tail++;
        }
     }
     head++;
        
 }
 printf("%d\n",&sum);
}