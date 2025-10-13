#include <stdio.h>
int main()
{
   char message[100]; // 分配一个大小为100的字符数组
   scanf("%99s", message); // 限制输入不超过99个字符（保留一个给空字符）
   printf("%s\n", message);
   return 0;
}