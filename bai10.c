
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Hàm tính tổng các chữ số của số nguyên
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Hàm đảo ngược số nguyên
int reverseNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int choice, n;

    // Nhập số phần tử mảng
    printf("Nhập số lượng phần tử mảng: ");
    scanf("%d", &n);

    int a[n];

    // Khởi tạo bộ sinh số ngẫu nhiên
    srand(time(0));

    // Sinh các số ngẫu nhiên từ 1 đến 100 và lưu vào mảng a
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100 + 1;  // Sinh số ngẫu nhiên từ 1 đến 100
        printf("Số ngẫu nhiên %d: %d\n", i + 1, a[i]);
    }

    do {
        // Hiển thị menu cho người dùng
        printf("\nMenu:\n");
        printf("1: Tính tổng các chữ số của số nguyên\n");
        printf("2: Đảo ngược số nguyên\n");
        printf("3: Thoát\n");
        printf("Chọn một thao tác (1/2/3): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Tính tổng các chữ số của số nguyên
                for (int i = 0; i < n; i++) {
                    printf("Tổng các chữ số của số %d là: %d\n", a[i], sumOfDigits(a[i]));
                }
                break;
            case 2:
                // Đảo ngược số nguyên
                for (int i = 0; i < n; i++) {
                    printf("Số đảo ngược của %d là: %d\n", a[i], reverseNumber(a[i]));
                }
                break;
            case 3:
                // Thoát khỏi chương trình
                printf("Thoát chương trình.\n");
                break;
            default:
                printf("Lựa chọn không hợp lệ! Vui lòng chọn lại.\n");
        }
    } while (choice != 3);

    return 0;
}
