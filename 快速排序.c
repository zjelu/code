#include<stdio.h>
int array[10001],n;
void quicksort(int left,int right){
int j,i,temp;
if (left >= right) {
        return;
    }


temp=array[left];
j=right;i=left;
while(j!=i){
    while(array[j]>=temp && j>i){
        j--;
    }
     while(array[i]<=temp && j>i){
        i++;
    }
    if (i<j){
        int t;
      t=array[j];
    array[j]=array[i];
    array[i]=t;
      }
    }
    array[left]=array[i];
    array[i]=temp;
    quicksort(left,i-1);
    quicksort(i+1,right);
    return;
}

int main(){
    int i,j;
    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int p;
        scanf("%d",&array[i]);
        
    }
    quicksort(1,n);
    for(i=1;i<=n;i++){
        printf("%d ",array[i]);
    }
    return 0;

   
    

}
