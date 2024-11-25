#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhapthongtin(char mssv[], char hoten[], char lop[]) {
    printf("nhap mssv: ");
    scanf("%s", mssv);
    while (getchar() != '\n');  // Đọc và bỏ qua các ký tự thừa trong bộ đệm đầu vào

    printf("nhap ho ten: ");
    fgets(hoten, 31, stdin);
    hoten[strcspn(hoten, "\n")] = '\0';  // Xóa ký tự newline

    printf("Lop: ");
    scanf("%s", lop);
}

void XuatThongtin(char mssv[], char hoten[], char lop[]) {
    printf("Ma so sinh vien: %s\n", mssv);
    printf("Ho va ten: %s\n", hoten);
    printf("Lop: %s\n", lop);
}

void Dodai(char hoten[]) {
    printf("Do dai cua ten la: %lu\n", strlen(hoten));
}

void KiemTraCN(char lop[]) {
    if (strstr(lop, "ITE") != NULL) {
        printf("\nHoc nganh IT");
    } else {
        printf("\nkhong hoc nganh IT");
    }
}

void InHoa(char hoten[]) {
    for (int i = 0; hoten[i] != '\0'; i++) {
        hoten[i] = toupper(hoten[i]);
    }
    printf("\nIn hoa: %s", hoten);
}

void ChuanHoa(char hoten[]) {
    for (int i = 0; hoten[i] != '\0'; i++) {
        hoten[i] = tolower(hoten[i]);
    }
    hoten[0] = toupper(hoten[0]);
    for (int i = 1; i < strlen(hoten); i++) {
        if (hoten[i - 1] == ' ' && hoten[i] != ' ') {
            hoten[i] = toupper(hoten[i]);
        }
    }
    printf("\nchuan hoa: ");
    puts(hoten);
}

int main() {
    char mssv[11], hoten[31], lop[11];
    nhapthongtin(mssv, hoten, lop);
    XuatThongtin(mssv, hoten, lop);
    Dodai(hoten);
    KiemTraCN(lop);
    InHoa(hoten);
    ChuanHoa(hoten);
    return 0;
}
