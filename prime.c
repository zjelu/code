#include <stdio.h>
int main() {
    long long n = 0;  // 改为long long支持大数
    int sum = 0;
    scanf("%lld", &n);  // 格式说明符改为%lld

    // 处理负数和0的特殊情况
    long long temp = n < 0 ? -n : n;  // 取绝对值处理负数
    
    // 计算各位数字之和
    while (temp > 0) {
        int a = temp % 10;
        temp = temp / 10;
        sum = sum + a;
    } 
    
    // 处理n=0的情况
    if (n == 0) {
        sum = 0;
    }

    // 计算mask
    int mask = 1;
    int t = sum;
    while (t > 9) {
        t /= 10;
        mask *= 10;
    }

    // 输出结果
    do {
        int d = sum / mask;
        switch (d) {
            case 0: printf("ling"); break; 
            case 1: printf("yi"); break;
            case 2: printf("er"); break;
            case 3: printf("san"); break;
            case 4: printf("si"); break; 
            case 5: printf("wu"); break;
            case 6: printf("liu"); break;
            case 7: printf("qi"); break;
            case 8: printf("ba"); break; 
            case 9: printf("jiu"); break;
        }
        if (mask > 9) {
            printf(" ");
        }
        sum = sum % mask;
        mask = mask / 10;
    } while (mask > 0);

    return 0;
}




