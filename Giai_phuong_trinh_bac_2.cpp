#include<math.h>
#include<stdio.h>
using namespace std;

void PTB2(float a, float b, float c, float x1, float x2){
	if(a==0){
		x1 = -c/b;
		printf("Phuong trinh co 1 nghiem:%f", x1);
	}else{
	float delta = b*b - 4*a*c;
	if(delta<0) printf("Phuong trinh vo nghiem.");
	else if(delta==0){
			x1 = x2 = -b/2*a;
			printf("Phuong trinh co nghiem kep la:%f",x1);
		}else{
			x1 = (-b+sqrt(delta))/2*a;
			x2 = (-b-sqrt(delta))/2*a;
			printf("Phuong trinh co 2 nghiem phan biet.");
			printf("Nghiem thu nhat:%f ",x1);
			printf("Nghiem thu hai:%f ",x2);
		}
	}
}
int main(){
	float a, b, c, x1, x2;
//	do{
	printf("Nhap a:");
	scanf("%f",&a);
//	}while(!a);
	printf("Nhap b:");
	scanf("%f",&b);
	printf("Nhap c:");
	scanf("%f",&c);
	PTB2(a,b,c,x1,x2);
}
