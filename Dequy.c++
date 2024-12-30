#include <stdio.h>
#include <limits.h>

void nhapMang(int a[], int n) {
    if (n == 0) {
        return;
    }
    nhapMang(a, n - 1);
    printf("Nhap phan tu thu %d: ", n);
    scanf("%d", &a[n - 1]);
}

void xuatMang(int a[], int n) {
    if (n == 0) {
        return;
    }
    xuatMang(a, n - 1);
    printf("%d ", a[n - 1]);
}

int tinhTong(int a[], int n) {
    if (n == 0) {
        return 0;
    }
    return a[n - 1] + tinhTong(a, n - 1);
}

int tinhTongChan(int a[], int n) {
    if (n <= 0) {
        return 0;
    }
    if (a[n - 1] % 2 == 0) {
        return a[n - 1] + tinhTongChan(a, n - 1);
    }
    return tinhTongChan(a, n - 1);
}

int demDuong(int a[], int n) {
    if (n == 0) {
        return 0;
    }
    if (a[n - 1] > 0) {
        return 1 + demDuong(a, n - 1);
    }
    return demDuong(a, n - 1);
}

int timMax(int a[], int n) {
    if (n == 1) {
        return a[0];
    }
    int maxCuaPhanConLai = timMax(a, n - 1);
    return (a[n - 1] > maxCuaPhanConLai) ? a[n - 1] : maxCuaPhanConLai;
}

int timMin(int a[], int n) {
    if (n == 1) {
        return a[0];
    }
    int minCuaPhanConLai = timMin(a, n - 1);
    return (a[n - 1] < minCuaPhanConLai) ? a[n - 1] : minCuaPhanConLai;
}

int timChanCuoi(int a[], int n) {
    if (n == 0) {
        return INT_MIN;
    }
    int soChan = timChanCuoi(a, n - 1);
    if (a[n - 1] % 2 == 0) {
        return a[n - 1];
    }
    return soChan;
}

int timViTriXCuoi(int a[], int n, int x) {
    if (n == 0) {
        return -1;
    }
    int viTri = timViTriXCuoi(a, n - 1, x);
    if (a[n - 1] == x) {
        return n - 1;
    }
    return viTri;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 1;
    }

    int a[n];
    nhapMang(a, n);
    printf("Mang vua nhap: ");
    xuatMang(a, n);
    printf("\n");

    printf("Tong cac phan tu: %d\n", tinhTong(a, n));
    printf("Tong cac phan tu chan: %d\n", tinhTongChan(a, n));
    printf("So luong cac phan tu duong: %d\n", demDuong(a, n));
    printf("Phan tu lon nhat: %d\n", timMax(a, n));
    printf("Phan tu nho nhat: %d\n", timMin(a, n));

    int chanCuoi = timChanCuoi(a, n);
    if (chanCuoi == INT_MIN) {
        printf("Khong co phan tu chan.\n");
    } else {
        printf("Phan tu chan cuoi cung: %d\n", chanCuoi);
    }

    int x;
    printf("Nhap gia tri can tim x: ");
    scanf("%d", &x);
    int viTriXCuoi = timViTriXCuoi(a, n, x);
    if (viTriXCuoi == -1) {
        printf("Khong tim thay x.\n");
    } else {
        printf("Vi tri cuoi cung cua x: %d\n", viTriXCuoi);
    }

    return 0;
}
