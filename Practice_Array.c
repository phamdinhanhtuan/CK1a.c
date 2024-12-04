#include<stdio.h>
#define MAX 100
#include<stdbool.h>
#include<math.h>

void nhapSL(int *n){
    do{
        printf("Nhap so luong cac phan tu: ");
        scanf("%d", n);
    }while(*n <= 0 || *n >= 100);
}

void nhapDS(int a[],int n)
{
    printf("Nhap cac phan tu:\n ");
    for(int i=0; i<n; i++){
        printf("Cac phan tu a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
}

void xuatDS(int a[],int n)
{
    printf("day cac phan tu: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

void xuatChia3(int a[],int n){
    printf("Cac phan tu chia het cho 3: ");
    for(int i=0; i<n; i++){
        if(a[i] % 3 ==0){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}

void xuatAmChan(int a[],int n)
{
    printf("Cac phan tu am chan: ");
    for(int i=0; i<n; i++){
        if(a[i] < 0 && a[i] % 2 == 0){
            printf("%d",a[i]);
        }
    }
    printf("\n");
}

bool SNT(int n)
{
    if(n < 2)
        return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0)
        return false;
    }
return true;
}

void xuatSNT(int a[],int n)
{
    printf("Cac phan tu nguyen to: ");
    for(int i=0; i<n; i++){
        if(SNT(a[i]))
            printf("%d ",a[i]);
    }
    printf("\n");
}

int demAmChanKhongChia5(int a[],int n)
{
   int dem =0;
   for(int i=0; i<n;i++){
    if(a[i] < 0 && a[i] % 2 ==0 && a[i] % 5 != 0)
        dem++;
        printf("%d ",a[i]);
   } 
   printf("\n");
   return dem;
}

int demSNT(int a[],int n)
{
    int dem =0;
    for(int i=0; i<n;i++){
        if(SNT(a[i])){
            dem++;
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return dem;
}

int tinhTong(int a[],int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += a[i];
    }
    printf("\n");
    return sum;
}

int tinhTongSNT(int a[],int n)
{
    int sum =0;
    for(int i=0; i<n; i++){
        if(SNT(a[i])){
            sum += a[i];
        }
    }
    printf("\n");
    return sum;
}

float TBC(int a[],int n)
{
    int sum =0;
    int dem =0;
    for(int i=0; i<n; i++){
        sum += a[i];
        dem ++;
    }
    printf("\n");
    return (float)sum / dem;
}

float TBC_SNT(int a[],int n)
{
    int sum =0; int dem =0;
    for(int i=0; i<n; i++){
        if(SNT(a[i]))
        sum += a[i];
        dem ++;
    }
    printf("\n");
    return (float)sum/dem;
}

// them index để luu lại vị tri phần tử mảng
void timDuongDau(int a[],int n)
{
    for(int i=0; i<n; i++){
        if(a[i] > 0){//kiểm tra xem số dương là số lớn hơn không.
            printf("Tim duong dau: vi tri: %d  gia tri: %d\n",i,a[i]);
            return;
            }
        }
    printf("Khong tim thay cac phan tu duong dau!\n");
}

void timDuongCuoi(int a[],int n)
{
    for(int i=n-1; i>=0; i--){
        if(a[i] > 0){
            printf("Tim duong cuoi: vi tri: %d gia tri: %d\n",i,a[i]);
                return;
            }
        }
    printf("Khong tim thay cac phan tu duong cuoi!\n");
}

void timPhanTu(int a[],int n,int x)
{
    for(int i=0; i<n; i++){
        if(a[i] == x){
            printf("Tim phan tu gia tri: %d vi tri: %d\n",x,i);
            return;
        }
    }
    printf("Khong tim thay phan tu x!",x);
}

int phanTuLonNhat(int a[],int n)
{
    int max=a[0];
    for(int i=0; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;
}

int demPhanTuLonNhat(int a[],int n)
{
    int max; 
    int dem;
    for(int i=0; i<n; i++){
        if(a[i] > max){
            dem++;
        }
    }
    return max;
}

void xuatPhanTuLonNhat(int a[],int n)
{
    int max = phanTuLonNhat(a,n);
    printf("Cac vi tri lon nhat: %d",max);
    for(int i=0; i<n; i++){
        if(a[i] > max)
            printf("%d",i);
    }
    printf("\n");
}
int main()
{
    int n;
    nhapSL(&n);
    int a[n];
    nhapDS(a,n);
    xuatDS(a,n);
    xuatChia3(a,n);
    xuatAmChan(a,n);
    xuatSNT(a,n);
    printf("Dem am chan khong chia het cho 5:%d ",demAmChanKhongChia5(a,n));
    printf("Dem so nguyen to: %d",demSNT(a,n));
    printf("Tinh tong: %d",tinhTong(a,n));
    printf("Tinh tong cac so nguyen to: %d",tinhTongSNT(a,n));
    printf("Tinh trung binh cong: %.2f",TBC(a,n));
    printf("Tinh trung binh cong cac so nguyen to: %2.1f\n",TBC_SNT(a,n));
    timDuongDau(a,n);
    timDuongCuoi(a,n);
    int x;
        printf("Nhap x: ");
        scanf("%d",&x);
    timPhanTu(a,n,x);
    printf("Tim phan tu lon nhat: %d\n",phanTuLonNhat(a,n));
    printf("Dem phan tu lon nhat: %d\n",demPhanTuLonNhat(a,n));
    xuatPhanTuLonNhat(a,n);
return 0;
}