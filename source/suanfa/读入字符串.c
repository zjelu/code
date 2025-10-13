#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_LENGTH 100

int main() {
    char *strings[MAX_STRINGS];  // 指针数组，可存储多个字符串
    
    // 为每个指针分配内存
    for(int i = 0; i < MAX_STRINGS; i++) {
        strings[i] = (char*)malloc(MAX_LENGTH * sizeof(char));
        if(strings[i] == NULL) {
            printf("内存分配失败\n");
            return 1;
        }
    }
    
    // 读取多个字符串
    for(int i = 0; i < MAX_STRINGS; i++) {
        printf("请输入第%d个字符串: ", i+1);
        fgets(strings[i], MAX_LENGTH, stdin);
        
        // 移除换行符（可选）
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }
    
    // 输出所有字符串
    printf("\n你输入的所有字符串:\n");
    for(int i = 0; i < MAX_STRINGS; i++) {
        printf("字符串%d: %s\n", i+1, strings[i]);
    }
    
    // 释放所有内存
    for(int i = 0; i < MAX_STRINGS; i++) {
        free(strings[i]);
    }
    
    return 0;
}