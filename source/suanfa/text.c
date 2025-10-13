#include<stdio.h>
#include<string.h>
int main(){
char array[80];
char b[40][40];

int i=0,j=0,m=0,p =0;

 for(i = 0; i < 40; i++) {
        for(j = 0; j < 40; j++) {
            b[i][j] = '\0';
        }
    }


fgets(array, sizeof(array), stdin);

array[strcspn(array, "\n")] = '\0';

//统计单词数量
//收集单词

    for (j=0;j<80;j++)
    {   
        if(array[j]=='\0')
        { 
            if (p > 0) {
            b[m][p] = '\0'; // 结束当前单词
            m++; // 单词数加一
        }
          break;
        }
      if( array[j]==' ') 
      {
         if (p > 0) {
            b[m][p] = '\0'; // 结束当前单词
            m++;
            p = 0;
        }
        continue;
      }
       b[m][p]=array[j];
        p++;
}

     if(p > 0) {
        b[m][p] = '\0';
        m++;
    }
    
    int first = 1; 
for(i = m - 1; i >= 0; i--) {
    if(strlen(b[i]) == 0) continue;  
    if(!first) printf(" ");   // 只有不是第一个单词才加空格
    printf("%s", b[i]);
    first = 0;
}


  
}


#include <stdio.h>
#include <string.h>

int main() {
    char array[81];       // 输入字符串
    char words[40][81];   // 存储单词
    int count = 0;        // 单词数
    int i = 0, p = 0;     // i: 扫描原字符串下标, p: 单词内部下标

    // 读入一行
    fgets(array, sizeof(array), stdin);
    array[strcspn(array, "\n")] = '\0';  // 去掉换行符

    while (array[i] != '\0') {
        if (array[i] != ' ') {
            // 遇到字母，放进当前单词
            words[count][p++] = array[i];
        } else {
            // 遇到空格，结束当前单词
            words[count][p] = '\0';  // 补上结束符
            count++;
            p = 0; // 新单词从头写
        }
        i++;
    }

    // 最后一个单词收尾
    if (p > 0) {
        words[count][p] = '\0';
        count++;
    }

    // 倒序输出
    for (i = count - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if (i > 0) printf(" ");
    }
    printf("\n");

    return 0;
}