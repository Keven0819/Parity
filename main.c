#include <stdio.h>
#include <stdlib.h>

int main() {
    while (1) {  // 無限迴圈
        int I;
        scanf("%d", &I);
        
        if (I == 0) {
            break;  // 如果輸入為0，退出迴圈
        }
        
        if (I < 0) {
            continue;  // 如果輸入負數，重新開始迴圈
        }

        int i = 0;
        int binary[32];  // 假設整數最多32位
        int count = 0;
        int temp = I;

        // 計算二進制表示
        while (temp > 0) {
            binary[i] = temp % 2;
            if (binary[i] == 1) {
                count++;  // 直接在這裡計算1的個數
            }
            temp = temp / 2;
            i++;
        }

        printf("The parity of ");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
        printf(" is %d (mod 2).\n", count);
    }

    return 0;
}