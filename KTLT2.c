#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct SV{
    char ht[31];
    char msv[31];
    float DTB;
}SV;

void nhapSV(SV *sv)
{
    printf("Nhap ho ten: ");
    fflush(stdin);
    gets(sv ->ht);
    sv->ht[strcspn(sv->ht,"\n")]= "\0";
    printf("Nhap ma so hoc sinh: ");
    scanf("%s",sv->msv);
    printf("Nhap diem trung binh: ");
    scanf("%2f",&sv->DTB);
}

void xuatSV(SV sv)
{
    printf("ho ten:%s\n ",sv.ht);
    printf("ma so:%s\n ",sv.msv);
    printf("Diem trung binh:%2f\n ",sv.DTB);
}

void nhap_n(int *n)
{
    printf("Nhap so luong: ");
    scanf("%d",n);
}

void nhapDS(SV a[],int n)
{
    for(int i=0; i<n; i++){
        nhapSV(&a[i]);
    }
}

void xuatDS(SV a[],int n)
{
    for(int i=0; i<n; i++){
        xuatSV(a[i]);
    }
    printf("\n");
}

void timSV(SV a[],int n,char msv[31])
{
    printf("Nhap ma sinh vien can tim: ");
    scanf("%s",msv);
    for(int i=0; i<n; i++){
       if(strcmp(a[i].msv,msv)==0){
        printf("Thong tin sinh vien thay: ");
        xuatSV(a[i]);
        return;
       }
    }
    printf("Khong tim thay sinh vien:%s ",msv);
}

int timBin(SV a[],int n)
{
    int dem=0;
    for(int i=0; i<n; i++){
       if(strstr(a[i].ht,"Bin")!=0){
        dem++;
        xuatSV(a[i]);
       }
    }
    return dem;
}

void timHT(SV a[],int n,char ht[31])
{
    printf("Nhap ho ten can tim: ");
    scanf("%s",ht);
    for(int i=0; i<n; i++){
        if(strstr(a[i].ht,ht)!=NULL){
        xuatSV(a[i]);
        }
    }
}
int main()
{
    int n;
    SV *a=(SV*)malloc(n * sizeof(SV));
    if(a == NULL){
        printf("Khong the cap phat bo nho! ");
        return 1;
    }
    nhap_n(&n);
    nhapDS(a,n);
    xuatDS(a,n);
    char ht[31];
    char msv[31];
    timSV(a, n, msv); 
        printf("\nTim sinh vien co ten 'Bin':\n"); 
    int soBin = timBin(a, n); 
        printf("\nSo sinh vien co ten 'Bin': %d\n", soBin); 
    timHT(a, n,ht);
    free(a);
return 0;
}