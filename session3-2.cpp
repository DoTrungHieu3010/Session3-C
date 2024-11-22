#include<stdio.h>
int main(){
	float C, F;
	printf("Gia tri C la: ");
	scanf("%f", &C);
	F = C * 1.8 + 32;
	printf("Gia tri cua F la %.1f", F);
	return 0;
}
