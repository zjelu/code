#include <stdio.h>
#include <stdbool.h>
int a[10],book[10],n;


void dfs(int step) {
    int i;
    if(step==n+1){
    for (int i = 1; i <= n; ++i) {
        printf("%d", a[i]);
        
    }
     printf("\n");
    
     return;
  }


// 回溯生成全排列（0..n-1 对应元素）

  for (int i=1;i<=n;i++) {
        if (book[i]==0) {
                // 选择 i
        a[step] = i ;      // 记录当前深度的值（示例用值 i+1）
        book[i]=1;
        dfs(step+1);// 递归进入下一层
        book[i]=0 ;// 回溯：撤销选择（非常关键）
             
     }
  }
  return;
}

int main(void) {
    scanf("%d",&n);
    dfs(1);
    
    return 0;
}
