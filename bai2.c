#include<stdio.h>
int main()
{
    int n;
    int sumChan =0;
    int sumLe =0;
        printf("nhap so nguyen: ");
        scanf("%d",&n);
    if(n<=1){
        printf("Vui long nhap lai so khac");
    return 1;
    }
//so chan
    for(int i=2; i<=n; i+=2){
        sumChan += i;
    }
//so Le
    for(int i=1; i<=n; i+=2){
        sumLe += i;
    }
        printf("Tong cac so chan tu 1 den %d la: %d",n,sumChan);
        printf("\nTong cac so le tu 1 den %d la: %d",n,sumLe);
return 0;

}