#include<stdio.h>
int main(){
    int n,i,j;
    int array[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int p;
        scanf("%d",&p);
        array[i]=p;
    }
    for(i=0;i<n;i++){
         for(j=0;j<n-i-1;j++){
            if(array[j]>array[j+1]){
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
         }
    }
    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }
    printf("\n");

}