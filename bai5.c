#include <stdio.h>

int main() {
    int n, sum = 0;

    // Nhập số nguyên dương n
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // Kiểm tra nếu n <= 0
    if (n <= 0) {
        printf("Vui long nhap so nguyen duong.\n");
        return 1;
    }

    // Tính tổng các ước số thực sự của n
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    // Kiểm tra nếu tổng các ước bằng n
    if (sum == n) {
        printf("%d la so hoan hao.\n", n);
    } else {
        printf("%d khong phai la so hoan hao.\n", n);
    }

    return 0;
}
