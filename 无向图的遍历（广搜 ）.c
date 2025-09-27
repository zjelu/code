#include<stdio.h>
int m,n,array[101][101],book[101],a,b,sum=0;
//n是点数，m是边的个数，sum是遍历的点数


int main(){
   int i,j;
    scanf("边的条数为%d 点的个数为%d",&m,&n);
    int quene[10001],head,tail;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(i==j) array[i][j]=0;
              else array[i][j]=99999;//图的初始化
       
    for(i=1;i<=m;i++)
    {
        scanf("%d %d",&a,&b);
        array[a][b]=1;//读入图
        array[b][a]=1;
    }
    head=1;tail=1;
    quene[tail]=1;
    tail++;
    while(head<tail && tail<=n)
    { int cur=quene[head];
       for(i=1;i<=n;i++)
       {
        if (array[cur][i]==1)
        {
            quene[tail]=i;
            book[tail]=1;
            tail++;
        }
       } 
       if(tail>n)
       {
        break;
       }
       head++;
    
    }
     for(i=1;i<tail;i++)
     {
        printf("%d",quene[i]);
     }
    
}