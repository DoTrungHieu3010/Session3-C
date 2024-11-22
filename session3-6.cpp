#include<stdio.h>
int main(){
	int a, h;
	float s;
	printf("Do dai canh cua tam giac la: ");
	scanf("%d", &a);
	printf("Chieu cao cua tam giac la: ");
	scanf("%d", &h);
	s = (a * h) / 2;
	printf("Dien tich cua tam giac la: %.1f", s);
	return 0;
}
