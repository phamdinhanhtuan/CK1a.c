#include<stdio.h>
#define MAX 100
#include<math.h>
#include<stdbool.h>

void NhapSL(int *n){
    do{
        printf("Nhap so luong cac phan tu(0<n<%d): ",MAX);
        scanf("%d",n);
             if(*n<=0 || *n>=MAX){
                printf("Vui long nhap lai so khac\n");
            }
    }while(*n<=0 || *n>=MAX);
}
void NhapDS(int n,int a[]){
        printf("Nhap cac phan tu cua day so\n");
    for(int i=0;i<n;i++){
        printf("Phan tu %d:",i+1);
        scanf("%d",&a[i]);
    }
}

void XuatDS(int n,int a[]){
        printf("Day so vua nhap:\n");
    for(int i=0; i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void XuatChiaHetCho3(int n,int a[]){
    printf("Xuat cac phan tu chia het cho 3: ");
    for(int i=0; i<n; i++){
        if(a[i] % 3 == 0){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}

void XuatAC(int n, int a[]){
    printf("Xuat cac phan tu am chan: ");
    for(int i=0;i<n;i++){
        if(a[i]<0 && a[i] % 2 ==0)
            printf("%d ",a[i]);
    }
    printf("\n");
}

bool SNT(int n){
    if(n<2){
        return false;
    }
    for(int i=0; i<=sqrt(n);i++){
        if(n % i ==0)
        return true;
    }
    return false;
}

void XuatSNT(int n,int a[]){
    printf("Cac so nguyen to la: ");
    for(int i=0;i<n;i++){
        if(SNT(a[i])){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
}
 int AmChanKhongChiaHet5(int n,int a[]){
    int dem =0;
        for(int i=0;i<n;i++){
            if(a[i]<0 && a[i] % 2 ==0 && a[i] % 5 != 0)
                dem ++;
        }
    return dem;
 }

 int DemSNT(int a[],int n){
    int dem =0;
        for(int i=0;i<n;i++){
            if(SNT(a[i])){
                dem ++;
            }
        }
    return dem;
 }

 int Tong(int n,int a[]){
    int Sum =0;
        for(int i=0;i<n;i++){
            Sum += a[i];
        }
    return Sum;
 }

 int tongSNT(int n,int a[]){
    int Sum =0;
        for(int i=0;i<n;i++){
            if(SNT(a[i])){
                Sum += a[i];
            }
        }
    return Sum;
 }

 float TBC(int n,int a[]){
    int Sum =0;
    for(int i=0;i<n;i++){
        Sum += a[i];
    }
    return (float)Sum/n;
 }

 float tBCNT(int n,int a[]){
    int Sum =0;
    for(int i=0;i<n;i++){
        if(SNT(a[i])){
            Sum += a[i];
        }
    }
    return (float)Sum/n;
 }

 int timDuongDau(int n,int a[]){
    for(int i=0;i<n;i++){
        if(a[i] > 0)
            return i;
    }
    return -1;
 }

 int timDuongCuoi(int n,int a[]){
    for(int i= n-1;i>=0;i++){
        if(a[i] > 0)
            return i;
    }
    return -1;
 }
int main()
{
    int a[MAX];
    int n;
    
    NhapSL(&n);
    NhapDS(n,a);
    XuatDS(n,a);
    XuatChiaHetCho3(n,a);
    XuatAC(n,a);
    XuatSNT(n,a);
        printf("phần tử âm, chẵn, không chia hết cho 5 có trong dãy số là:%d\n ",AmChanKhongChiaHet5(n,a));
        printf("So luong nguyen to co trong day la:%d\n ",DemSNT(a,n));
        printf("Tong cac phan tu: %d \n",Tong(n,a));
        printf("Tong cac so nguyen to trong day la: %d\n",tongSNT(n,a));
        printf("Trung binh cong cac phan tu: %.2f\n",TBC(n,a));
        printf("Trung binh cong cua so nguyen to: %2.3f\n",tBCNT(n,a));
     int vt=timDuongDau(n,a);
        if (vt==-1) {
            printf("Day so khong co phan tu duong");
        }else{ 
            printf("Phan tu duong dau tien la %d tai vi tri %d\n", a[vt], vt);
        }
        
    int vitri = timDuongCuoi(n,a);
        if(vitri == -1){
            printf("Vui long nhap lai so khac");
        }else{
            printf("Phan tu duong cuoi la %d tai vi tri %d\n",a[vitri],vitri);
        }
return 0;
}
