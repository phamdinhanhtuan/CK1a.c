#include <stdio.h>

int giaiThua(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;

    // Nhập số nguyên dương n
    printf("Nhap so nguyen duong n (n <= 12): ");
    scanf("%d", &n);

    // Kiểm tra điều kiện n <= 12 và n >= 0
    if (n < 0 || n > 12) {
        printf("Vui long nhap so trong khoang 0 <= n <= 12\n");
    } else {
        // Gọi hàm giai thua và in ra kết quả
        printf("Giai thua cua %d la: %d\n", n,giaiThua(n));
    }
return 0;
}
