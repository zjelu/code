#include<stdio.h>
#include<stdlib.h>
int book[1001];
int main(){
    int k,a[1001]={0},i,guanjian[10000001]={0};
    int tail=0;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        scanf("%d ",&a[i]);
    }
    int original[1001];
    for(int i = 0; i < k; i++){
        original[i] = a[i];
    }
    for( i=1;i<=k;i++) 
    {
        while (a[i]!=1)
        {
        if(a[i]%2==0)
        {
        a[i]=a[i]/2;
        guanjian[tail]=a[i];
            tail++;
        }
       else {
        a[i]=(a[i]*3+1)/2;
            guanjian[tail]=a[i];
            tail++;
        }
            
    }
}
  int j;
for (j=0;j<tail;j++){
    for (i=1;i<=k;i++){
    if(guanjian[j]==original[i]){
        book[i]=1;
    }
}
}
  int result[1001], count = 0;
    for(int i = 1; i <= k; i++){
        if(book[i] == 0){
            result[count] = original[i];
            count++;
        }
    }
for (j=1;j<=count-1;j++){
    printf("%d",result[j]);
}
}