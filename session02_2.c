/*
Author:TuanN
Class:T2108A
Program:Session 2.2 variable and data type
Crate date: 14/8/2021
*/
#include <stdio.h>//libray of c 

int main(){
	
	//short: data type. Kieu du lieu la; a: la ten bien duoc khai bao.
	short int a;
	long b=5;
	long long c;
	long double d;
	float x;
	int y = 10;//1. kieu du lieu(bao nhieu bytes?; 2. Ten cua bien(y); 3. Gia tri cua bien(10)
	
	printf("size of int = %d bytes\n",sizeof(y));
	printf("size of short = %d bytes\n",sizeof(a));
	printf("size of long = %d bytes\n",sizeof(b));
	printf("size of long double = %d bytes",sizeof(d));
	
	getchar();
	return 0;
}
