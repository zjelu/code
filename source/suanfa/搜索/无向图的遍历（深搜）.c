#include<stdio.h>
int m,n,array[101][101],book[101],a,b,sum=0;
//n是点数，m是边的个数，sum是遍历的点数
void dfs(int cur){
int i=0;
sum++;
printf("%d",cur);
if(sum==n){
    return;
}
for(i=0;i<n;i++)
    {
    if(book[i]==0 && array[cur][i]!=99999)
    {
    book[i]=1;
    dfs(i);
    }
    }
    return;
}



int main(){
   int i,j;
    scanf("边的条数为%d 点的个数为%d",&m,&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(i==j) array[i][j]=0;
              else array[i][j]=99999;//图的初始化
       
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&a,&b);
        array[a][b]=1;//读入图
        array[b][a]=1;
    }
    book[1]=1;
    dfs(0);
    printf("%d",sum);
}     