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
    left=1, right=4 ;              
    

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

//第1步：main() 调用 quicksort(1, 4)
//分区后：数组变为 [3, 2, 5, 9]，i=3
//执行到第40行：quicksort(1, 2) ← 函数挂起，进入递归
//第2步：执行 quicksort(1, 2)

//left=1, right=2，区间 [3, 2]
//分区后：数组变为 [2, 3, 5, 9]，i=2
//执行到第40行：quicksort(1, 1) ← 再次挂起，进入更深递归
//第3步：执行 quicksort(1, 1)

//left=1, right=1
//立即满足终止条件：if (left >= right) 为真
//执行 return ← 第一次真正的返回
//返回到：quicksort(1, 2) 的第40行之后
//第4步：回到 quicksort(1, 2) 继续执行

//现在执行第41行：quicksort(3, 2) ← 区间无效
//left=3, right=2
//立即满足终止条件
//执行 return ← 第二次返回
//返回到：quicksort(1, 2) 的第41行之后
//第5步：quicksort(1, 2) 执行完毕

//执行第42行：return ← 第三次返回
//返回到：quicksort(1, 4) 的第40行之后
//第6步：回到 quicksort(1, 4) 继续执行

//现在执行第41行：quicksort(4, 4) ← 排序单个元素
//left=4, right=4
//立即满足终止条件
//执行 return ← 第四次返回
//返回到：quicksort(1, 4) 的第41行之后
//第7步：quicksort(1, 4) 执行完毕

//执行第42行：return ← 第五次返回
//返回到：main() 函数