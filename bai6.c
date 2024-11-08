#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool laSoChinhPhuong(int n) {
    if (n < 0) {
        return false;
    }
    int canBacHai = (int)sqrt(n);
    return (canBacHai * canBacHai == n);
}

int main() {
    int n;

    // Nhập số nguyên dương n
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // Kiểm tra và in kết quả
    if (laSoChinhPhuong(n)) {
        printf("%d la so chinh phuong.\n", n);
    } else {
        printf("%d khong phai la so chinh phuong.\n", n);
    }

    return 0;
}
