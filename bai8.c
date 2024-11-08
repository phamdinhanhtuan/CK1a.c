#include <stdio.h>

// Hàm kiểm tra số chẵn
int isEven(int n) {
    if (n % 2 == 0) {
        return 1; // Nếu n chia hết cho 2, là số chẵn
    } else {
        return 0; // Nếu không chia hết cho 2, là số lẻ
    }
}

int main() {
    int n;
    
    // Nhập số nguyên từ người dùng
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    // Kiểm tra và in kết quả
    if (isEven(n)) {
        printf("%d la so chan.\n", n);
    } else {
        printf("%d la so le.\n", n);
    }

    return 0;
}
