#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	int *ptr;
	int n, i;

/*	printf("\nNhap so pt canh tinh: ");
	scanf("%d",&n);*/
	
	//Cap phat bo nho dong cho mang
	//ptr = (int*)malloc(n * sizeof(int));
	
	n = 5;
	
	ptr = (int*)calloc(n, sizeof(int));
	
	if(ptr == NULL)
	{
		printf("\nKhong du bo nho cap phat cho ban dau!!!");
		exit(0);
	}
	
	else{
		printf("\nCap phat bo nho thanh cong!!!");
		
		for(int i=0; i<n; i++){
			ptr[i] = i + 1;//*(ptr+i) = i+1;
		}
		
		printf("\nPhan tu trong mang: ");
		for(i =0; i<n; i++){
			printf("%d", ptr[i]);//printf("%d",*(ptr+i);
		}
	
		n = 10;
		ptr = realloc(ptr, n*sizeof(int));
		
		printf("\nBo nho cap phat lai thanh cong: ");
		for(i = 5; i< n; ++i){
			ptr[i] = i + 1;
		}
		
		printf("\nTong so pt mang duoc cap phat la: ");
		for(i =0; i < n; ++i){
			printf("%d", ptr[i]);
		}
		
		free(ptr);
		
	}
	return 0;
}