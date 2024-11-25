#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int Random(int *n,int a[]){
    do{
        printf("Nhap so (0 < n < 100): ");
        scanf("%d", n);
        if(*n <= 0 || *n >= 100)
            printf("Vui long nhap lai so khac");
        }while(*n <= 0 || *n >= 100);
        srand(time(NULL));
        for(int i=0; i<*n; i++){
            a[i] = rand()% 41-20;
        }
    return 0;
}
void xuatMang(int n,int a[]){
    printf("Gia tri cua mang: ");
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
        }
    printf("\n");
 }

 int themViTriK(int n,int a[]){
   do{  
        printf("Nhap so:");
        scanf("%d",&k);
    }while(k<=0 || k>=100);
	if(n<100)
	{
		n++;
		for(int i=n-1 ;i>k ;i--)
		{
			a[i]=a[i-1];
		}
		a[k]=x;
		
	}  
 }
int themDau(int){
    if(n<100){
        n++;
        for(int = n-1; i<0; i++){
          a[i] = a[i-1];
        }
        a[0] = 2;
    }
}
int themCuoi(int n,int a[100],int m){
    if(n<100){
        a[n] = 10;
        n++;
    }
 }
int main()
{
    int n;
    int a[n];
    Random(&n,a);
    xuatMang(n,a);
	printf("\n");
	themDau(n,a);
	xuatMang(n,a);
	printf("\n");
	themCuoi(n,a);
	xuatMang(n,a);
}
