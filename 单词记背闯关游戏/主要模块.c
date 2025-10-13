#include "pre.h"
#include <stdio.h>
int main()
{
    start();
    run();
    return 0;
}

void gotoxy(int x, int y) {
    // ANSI 转义序列：\033[<y>;<x>H 或 \033[<y>;<x>f
    // 注意：行号在前，列号在后，且从1开始计数
    printf("\033[%d;%dH", y + 1, x + 1);
    fflush(stdout); // 确保立即输出
}

void start()
{
    int n;
    int i,j=1;
}