#include<stdio.h>
int main(){
	float pi = 3.14;
	int r;
	printf("Ban kinh cua hinh tron la: ");
	scanf("%d", &r);
	float cv;
	float dt;
	cv = 2 * pi * r;
	dt = (cv * 2) / 4 * pi;
    printf("Chu vi va dien tich hinh tron la %.2f %.2f",cv ,dt);
	return 0;
}
