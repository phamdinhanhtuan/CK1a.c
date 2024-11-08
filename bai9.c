#include <stdio.h>

// Hàm đảo ngược số nguyên
int reverseNumber(int n) {
    int reverse = 0;
    while (n != 0) {
        int digit = n % 10;  // Lấy chữ số cuối cùng của n
        reverse = reverse * 10 + digit;  // Thêm chữ số vào số đảo ngược
        n = n / 10;  // Bỏ chữ số cuối cùng khỏi n
    }
    return reverse;
}

int main() {
    int n;

    // Nhập số nguyên từ người dùng
    printf("Nhap so nguyen: ");
    scanf("%d", &n);

    // Gọi hàm đảo ngược và in kết quả
    int reversed = reverseNumber(n);
    printf("So dao nguoc cua %d la: %d\n", n, reversed);

    return 0;
}
