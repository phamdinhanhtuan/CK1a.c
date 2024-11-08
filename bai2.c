#include<stdio.h>
int main()
{
    int n;
    int sum =0;
        printf("nhap so nguyen: ");
        scanf("%d",&n);
    if(n<=1){
        printf("Vui long nhap lai so khac");
    return 1;
    }
    for(int i=2; i<=n; i+=2){
        sum += i;
    }
        printf("Tong cac so chan tu 1 den %d la: %d",n,sum);
return 0;
}