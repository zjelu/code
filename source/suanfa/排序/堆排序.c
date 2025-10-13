#include<stdio.h>
int h[101];
int n;

void swap(int x,int y)
{   int t;
    t=h[x];
    h[x]=h[y];
    h[y]=t;
}

void sizedown(int i)
{   
    int t,flag=0;
    while (i*2<=n && flag==0)
    {
        if(h[i]>h[i*2])
        {
            t=i*2;
        }
            else
                t=i;
        
         if(i*2+1<=n && flag==0)
        {
            if(h[t]>h[i*2+1])
            t=i*2+1;
            
            else
                t=i*2+1;
        }

        if(t!=i)
        {
            swap(t,i);
            i=t;
        }
        else
        {
        flag=1;
        }

    }
    return;
}

void create()
{
    int i;
    for (i=n/2;i>=1;i--)
    {
        sizedown(i);
    }
    return;
}

int deletemax()
{
int t=h[1];
h[1]=h[n];
n--;
sizedown(1);
return t;
}

int main()
{   int num,i;
    printf("请输入元素个数");
    scanf("%d",&num);

    for(int i=1; i<=num;i++)
    {
        scanf("%d",&h[i]);
        
    }
    n=num;

    create();

    for(int i=1;i<=num;i++)
    {
    printf("%d ",deletemax());
    }


}


