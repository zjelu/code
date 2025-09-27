#include<stdio.h>

int book[1001];
int main(){
    int k,a[1001]={0},guanjian[10001]={0};
    int tail=0;
    scanf("%d",&k);
    for(int i=1;i<=k;i++){
        scanf("%d",&a[i]);
    }
    int original[1001];
    for(int i = 1; i <=k; i++){
        original[i] = a[i];
    }
    for( int i=1;i<=k;i++) 
  
    { int temp=a[i];
      while (temp!=1)
        {
        if(temp%2==0)
        {
       temp=temp/2;
        guanjian[tail]=temp;
            tail++;
        }
       else {
        temp=(temp*3+1)/2;
            guanjian[tail]=temp;
            tail++;
        }
            
    }
}
  
for (int j=0;j<tail;j++){
    for (int i=1;i<=k;i++){
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
for (int j=0;j<count;j++){
    printf("%d ",result[j]);
}
}