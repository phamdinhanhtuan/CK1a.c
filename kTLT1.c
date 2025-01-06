#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

void nhap_n(int *n)
{
    do{
        printf("Nhap so luong cac phan tu: ");
        scanf("%d",n);
         if (*n <= 0 || *n >= 100) {
            printf("Gia tri n khong hop le! Vui long nhap lai.\n");
        }
    } while (*n <= 0 || *n >= 100);
}
  

void nhapDS(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("Nhap thu[%d]: ",i);
        scanf("%d",&a[i]);
    }
}

void xuatDS(int a[],int n)
{
    printf("Danh sach: ");
    for(int i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

bool SNT(int n)
{
    if(n<2)
        return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i==0)
        return false;
    }
    return true;
}
void inSNT(int n,int a[])
{
    printf("\nCac so nguyen to: ");
    for(int i=0; i<n; i++){
        if(SNT(a[i]))
        printf("%d ",a[i]);
    }
}

bool SCP(int n)
{
    int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

void inSCP(int a[],int n)
{
    printf("\nCac so chinh phuong: ");
    for(int  i=0; i<n; i++){
        if(SCP(a[i])){
            printf("%d ",a[i]);
        }
    }
}

void timMAX_MIN(int a[],int n)
{
    int max=0;int min=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] > max){
            max = a[i];
        }else{
            a[i] < min;
            min = a[i];
        }
    }
    printf("\nSo lon nhat:%d ",max);
    printf("\nSo nho nhat:%d ",min);
}
int main()
{
    int n;
    int *a =(int*)malloc(n*sizeof(int));
    if(a == NULL){
        printf("Khong the cap phat bo nho! ");
        return 1;
    }
    nhap_n(&n);
    nhapDS(a,n);
    xuatDS(a,n);
    inSNT(n,a);
    inSCP(a,n);
    timMAX_MIN(a,n);
}