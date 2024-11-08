#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool soNguyenTo(int n){
    if(n <=1){
    return false;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
    return false;
        }
    }
    return true;
}
int main()
{
    int n;
        printf("Nhap so nguyen: ");
        scanf("%d",&n);
    if(soNguyenTo(n)){
        printf("Day la so nguyen to");
    }else{
        printf("Vui long nhap lai so khac");
    }
return 0;
}