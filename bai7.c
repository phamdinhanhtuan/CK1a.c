#include <stdio.h>

// Hàm tính ước số chung lớn nhất (USCLN) bằng thuật toán Euclid
int uscln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tính bội số chung nhỏ nhất (BSCNN)
int bscnn(int a, int b) {
    return (a * b) / uscln(a, b);
}

int main() {
    int a, b;

    // Nhập hai số nguyên a và b
    printf("Nhap hai so nguyen a va b: ");
    scanf("%d %d", &a, &b);

    // Tính và in ra USCLN và BSCNN
    printf("USCLN cua %d va %d la: %d\n", a, b, uscln(a, b));
    printf("BSCNN cua %d va %d la: %d\n", a, b, bscnn(a, b));

    return 0;
}
