#include<stdio.h>

int main()
{
    int n;
    int max;
    int a[n];
    int sum =0;
        printf("Nhap so phan tu cua mang: ");
        scanf("%d",&n);
    if(n<=0){
        printf("Vui long nhap lai ");
    return 1;
    }
//nhap cac phan tu cua mang
        printf("Nhap %d so nguyen: ",n);
   for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
   }
        printf("\n");
// in ra cac phan tu cua mang
        printf("Nhap cac phan tu ");
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }
    for(int i=1; i<n; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    for(int i=0; i<n; i++){
        sum +=a[i];
    }
        printf("So lon nhat: %d",max);
        printf("\nTong cac phan tu: %d",sum);
return 0;
}
