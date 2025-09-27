#include<stdio.h>
int main(){
    int book[100];
    int n,i,t,j;
    for (i=0;i<100;i++){
        book[i]=0;
    }

    scanf("%d",&n);
    for(i=0;i<n;i++){
        int p;
        scanf("%d",&p);
        book[p]+=1;
    }
    for(t=0;t<100;t++){
       for (j=1;j<=book[t];j++){
        printf("%d ",t);
       }
    }
    printf("\n");
}