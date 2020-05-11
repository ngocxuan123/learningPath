#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int main(){
	int n, i;
	cout<<"Nhap so:";
	cin>>n;
/*	printf("Nhap so :");
	scanf("%f",n);*/
	if(n<2){
		printf("\n%d khong phai la so nguyen to.", n);
		return 0;
	}else{
		int dem = 0;
		for(i=2; i<=n/2; i++){
			if(n%i==0)
			dem++;
		}
		if(dem ==0){
		printf("\n%d la so nguyen to", n);
    	}else{
    		printf("\n%d khong phai la so nguyen to", n);
    	}
	}
}
