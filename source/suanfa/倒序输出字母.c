#include <stdio.h>
#include <string.h>

int main() {
    char array[80];
    char words[40][40]; // 存储单词的二维数组
    
    // 初始化数组
    int i, j;
    for(i = 0; i < 40; i++) {
        for(j = 0; j < 40; j++) {
            words[i][j] = '\0';
        }
    }
    
    // 读取输入
    fgets(array, sizeof(array), stdin);
    
    // 移除换行符
    array[strcspn(array, "\n")] = '\0';
    
    int word_count = 0; // 单词计数器
    int char_pos = 0;   // 当前单词中的字符位置
    
    // 分割单词
    for(i = 0; array[i] != '\0'; i++) {
        if(array[i] == ' ') {
            // 遇到空格，结束当前单词
            if(char_pos > 0) {
                words[word_count][char_pos] = '\0';
                word_count++;
                char_pos = 0;
            }
        } else {
            // 非空格字符，添加到当前单词
            words[word_count][char_pos] = array[i];
            char_pos++;
        }
    }
    
    // 处理最后一个单词
    if(char_pos > 0) {
        words[word_count][char_pos] = '\0';
        word_count++;
    }
    
    // 逆序输出单词
    for(i = word_count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if(i > 0) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}