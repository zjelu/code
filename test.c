#include<stdio.h>
#include<stdlib.h>

int book[1001];

int compare(const void *a, const void *b) {
    return *(int*)b - *(int*)a; // 从大到小排序
}

int main() {
    int k, a[1001] = {0}, i, guanjian[100001] = {0};
    int tail = 0;
    scanf("%d", &k);
    
    for(int i = 1; i <= k; i++) {
        scanf("%d", &a[i]);
    }
    
    int original[1001];
    for(int i = 1; i <= k; i++) {
        original[i] = a[i]; // 修正索引
    }
    
    for(i = 1; i <= k; i++) {
        int temp = a[i];
        while (temp != 1) {
            if(temp % 2 == 0) {
                temp = temp / 2;
            } else {
                temp = (temp * 3 + 1) / 2;
            }
            guanjian[tail] = temp;
            tail++;
        }
    }
    
    for(int j = 0; j < tail; j++) {
        for(i = 1; i <= k; i++) {
            if(guanjian[j] == original[i]) {
                book[i] = 1;
            }
        }
    }
    
    int result[1001], count = 0;
    for(int i = 1; i <= k; i++) { // 从1开始
        if(book[i] == 0) {
            result[count] = original[i];
            count++;
        }
    }
    
    // 从大到小排序
    qsort(result, count, sizeof(int), compare);
    
    // 输出结果
    for(int j = 0; j < count; j++) {
        printf("%d", result[j]);
        if(j < count - 1) {
            printf(" "); // 添加空格分隔
        }
    }
    
    return 0;
}