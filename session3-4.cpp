#include<stdio.h>
int main(){
	float toan, van, anh, tong, ave;
	printf("Diem cau toan la: ");
	scanf("%f", &toan);
	printf("Diem cau van la: ");
	scanf("%f", &van);
	printf("Diem cau anh la: ");
	scanf("%f", &anh);
	tong = toan + van + anh;
	printf("Tong diem la %.2f\n", tong);
	ave = tong / 3;
	printf("Diem trung binh la %.2f", ave);
	return 0;
}
