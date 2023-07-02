#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,Y;
	printf("Nhap a = ");scanf("%f",&a);
	printf("Nhap b = ");scanf("%f",&b);
	printf("Nhap c = ");scanf("%f",&c);
	if(b <= c){
		Y = pow(a,2)+3*a-1;
	}
	
	else if(b>c) {
		Y = 0;
	} 
	printf("Y = %g",Y);
return 0;
}